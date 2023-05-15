#include<iostream>
using namespace std;



int main()
{
cout<<"Enter two numbers to be divided"<<endl;
double a, b;
double div = 0;
cin>>a>>b;
try {
if(b==0)
{
string s ="Exception: division by zero not possible";
throw s;
}
div = a/b;
cout<<a<<"/"<<b <<" = "<<div<<endl;
}
catch (const string & s)
{
cout<<s<<endl;
}
return 0;
}
