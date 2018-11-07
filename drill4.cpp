#include "std_lib_facilities.h"

int s;

int szam(string x, int y)
{
	x.erase(s-y);
	int ih=1;
	for(int i=0;i<s-y;i++)
	{
		if(isdigit(x[i])==0)ih=0;
	}
	return ih;
	
}

int main()
{
	string x , unit;
	vector<double> num;
	double xo,mi=9999999,ma=-9999999,sum=0;
	int db=0;
	while(1)
	{
		cin>>x;
		if(x=="|")break;
		s=x.length();
		if(x[s-2]=='c'&&x[s-1]=='m'&&szam(x,2)==1)
		{
			x.erase(s-2);
			unit="cm";
			xo= stod(x);
			sum=sum+ xo/100;
			xo=xo/100;
			db++;
		}
		else if(x[s-2]=='i'&&x[s-1]=='n'&&szam(x,2)==1)
		{
			x.erase(s-2);
			unit="in";
			xo= stod(x);
			sum=sum+ xo*0.0254;
			xo=xo*0.0254;
			db++;
		}
		else if(x[s-2]=='f'&&x[s-1]=='t'&&szam(x,2)==1)
		{
			x.erase(s-2);
			unit="ft";
			xo= stod(x);
			sum=sum+ xo*0.3048;
			xo=xo*0.3048;
			db++;
		}
		else if(x[s-1]=='m'&&szam(x,1)==1)
		{
			x.erase(s-1);
			unit="m";
			xo= stod(x);
			sum=sum+ xo;
			db++;
		}
		else 
		{
			cout<<"Invalid unit";
			goto here;
		}
		
		num.push_back(xo);
		
		if(xo<mi)
		{
			mi=xo;
			
		}

		if(xo>ma)
		{
			ma=xo;
		}
		here:
		cout<<"\n";

	}
	
	cout<<"The smallest: "<<mi<<" m\n";
	cout<<"The largest : "<<ma<<" m\n";
	cout<<"Sum: "<<sum<<" m\n";
	sort (num.begin(), num.end());
	cout<<"List:\n";
	for(int i=0;i<num.size();i++)
		cout<<num[i]<<" m\n";
	
	return 0;
}