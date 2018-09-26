#include <iostream>

using namespace std;

int main()
{
int x=9, y=2;
cout<<"x="<<x<<" y="<<y<<endl;
x=x*y;
y= x/y;
x= x/y;
cout<<"x="<<x<<" y="<<y;
}