#include <iostream>
using namespace std;

int add(int a,int b=0,int c=0)
{
return a+b+c;
}
int main()
{
int a,b,c;
cout<<"Enter three numbers:"<<endl;
cin>>a>>b>>c;
cout<<"Adding "<<a<<" and " <<b<<" and "<<c<<" = "<<add(a,b,c)<<endl;
cout<<"Adding "<<a<<" and " <<b<<" = "<<add(a,b)<<endl;
cout<<"Adding "<<a<<" = "<<add(a)<<endl;
return 0;
}


