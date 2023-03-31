#include<iostream>
using namespace std;
int add(int a,int b)
{
cout<<a+b<<endl;
return a+b;
}
int main()
{
int a,b;
cout<<"Enter two number";
cin>>a>>b;
int c=add(a,b);
cout<<c<<endl;
return 0;
}
