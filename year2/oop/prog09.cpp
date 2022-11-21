#include <iostream>
using namespace std;
void swap(string *s1,string* s2)
{
string *t;
t=s1;
s1=s2;
s2=t;
}
int main()
{
string s1,s2;
cout<<"Enter two strings: "<<endl;
cin>>s1>>s2;
cout<<endl<<"Current string: "<<s1<<" "<<s2<<endl;
swap(s1,s2);
cout<<"Swapped string: "<<s1<<" "<<s2<<endl;
return 0;
}
