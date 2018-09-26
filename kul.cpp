#include <iostream>

using namespace std;

int main()
{
int x=5, y=7;
cout<<"x="<<x<<" y="<<y<<endl;
x= x+y;
y= x-y;
x= x-y;
cout<<"x="<<x<<" y="<<y;
return 0;
}