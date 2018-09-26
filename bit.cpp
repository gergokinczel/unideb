#include <iostream>

using namespace std;

int main()
{
int a,i=1;
cout<<"Adja meg a szamot:";cin>>a;
while(a<<=1)
{
i++;
}
cout<<i;
return 0;
}