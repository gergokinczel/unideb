#include "std_lib_facilities.h"

int main()
{
string first;
string friend_name;
char friend_sex=0;
int age=0;
cout<<"First name:";cin>>first;
cout<<"Age of the recipient:";cin>>age;
if(0>age||age>110)simple_error("You are kidding! ☺");
cout<<"Give me the name of the friend: ";cin>>friend_name;
cout<<"Is the friend male(m) or female(f): ";cin>>friend_sex;
cout<<"Dear "<<first<<",";
cout<<"\nHow are you? I am fine. I miss you. I love talking to you at night.\nI love the way you smell BEFORE you take a shower";
cout<<"\nHave you seen "<<friend_name<<" lately?\n";
if(friend_sex=='m')cout<<"If you see "<<friend_name<<" please ask him to call me.\n";
if(friend_sex=='f')cout<<"If you see "<<friend_name<<" please ask her to call me.\n";
cout<<"I hear you just had a birthday and you are "<<age<<" years old.\n";
if(age<12)cout<<"Next year you will be "<<age+1;
if(age==17)cout<<"Next year you will be able to vote.";
if(age>70)cout<<"I hope you are enjoying retirement.";
cout<<"\nYours sincerely,\n\nKinczel Gergő\n";

}