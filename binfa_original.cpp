#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

struct fa //fa deklarálása
{
	int elem, kar;
	fa *bal;
	fa *jobb;
};

int maxi=0;
string a; 

fa *letrehoz() //létrehozó függvény
{
	fa *t,*uj,*gyok;
	int mely=1;
	t=new fa; //gyökér elkészítése
	t->elem=0; 
	t->kar=8;
	t->bal=t->jobb=NULL;
	gyok=t;
	getline(std::cin,a); //string sor bekérése
	for(int i=0;i<a.size();i++) //egyenként haladva felbontjuk a stringet
	{
		
		if(a[i]=='0') // 0 elemeket balra
		{
			if(t->bal==NULL) //ha új elemet találtunk betesszük majd vissza ugrunk a gyökérre
			{
				uj=new fa;
				t->bal=uj;
				uj->elem=mely; //mélység mérése
				uj->kar=0;
				if(mely>maxi)maxi=mely;
				uj->bal=uj->jobb=NULL;
				t=gyok;
				mely=1;
			}
			else
			{
				t=t->bal;
				mely++;
			}
		}
		if(a[i]=='1') // 1 elemeket jobbra helyezzük
		{
			if(t->jobb==NULL)
			{
				uj=new fa;
				t->jobb=uj;
				uj->elem=mely;
				uj->kar=1;
				if(mely>maxi)maxi=mely;
				uj->bal=uj->jobb=NULL;
				t=gyok;
				mely=1;
			}
			else
			{
				t=t->jobb;
				mely++;
			}
		}
	}
	return gyok;
}
	
void kiir() 
{
	for(int i=0;i<a.size();i++)
	{
	if(i%60==0)cout<<endl;
	cout<<a[i];
	}
}

double ago=0,hossz=0,atlh=0,osz,taposz=0,elatl=0;

void ag(fa *gyok)
{
	elatl+=gyok->kar;
	if(gyok->bal==NULL && gyok->jobb==NULL){ago++;atlh=atlh+gyok->elem;}
	else if(gyok->bal!=NULL && gyok->jobb!=NULL) hossz+=2;
	else hossz++;
	if(gyok->bal!=NULL){ag(gyok->bal);}; 
	if(gyok->jobb!=NULL){ag(gyok->jobb);};
}

void tap_szoras(fa *gyok)
{
	if(gyok->bal==NULL && gyok->jobb==NULL)taposz+=((gyok->elem-osz)*(gyok->elem-osz));
	if(gyok->bal!=NULL){tap_szoras(gyok->bal);}; 
	if(gyok->jobb!=NULL){tap_szoras(gyok->jobb);};
}

int vec[50];

void ag_kiir(fa *gyok,int i)
{
	if(gyok->kar!=8)
	{
	vec[i]=gyok->kar;
	}
	
	if(gyok->bal==NULL && gyok->jobb==NULL)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<vec[j];
		}
		cout<<"\n";
	}
	
	if(gyok->bal!=NULL){ag_kiir(gyok->bal,i+1);}; 
	if(gyok->jobb!=NULL){ag_kiir(gyok->jobb,i+1);};

}

int main()
{
	fa *gyok;
	gyok=letrehoz();
	if(a.size()<1000)
	kiir();
	ag(gyok);
	cout<<"\nAgak szama: "<<ago;
	osz=atlh/ago;
	cout<<"\nAgak atlag hossza: "<<osz;
	tap_szoras(gyok);
	cout<<"\nTapasztalati szoras: "<<sqrt(taposz/(ago-1));
	cout<<"\nFa elemszama: "<<hossz;
	cout<<"\nFa magassaga: "<<maxi;
	cout<<"\nFa elemeinek az atlaga: "<<(elatl-8)/hossz;
	cout<<endl;
	int i=0;
	if(ago<50)ag_kiir(gyok,i);
	return 0;
}