#include <iostream>
using namespace std;

void swap ( int& a,int & b)
{
int t;
t=a;
a=b;
b=t;
}
int main()
{
int n,m;
cout<<"Enter two numbers: "<<endl;
cin>>n>>m;
cout<<n<< " "<<m;
swap(n,m);
cout<<endl<<"Swapped values: "<<n<<" " <<m<<endl;
return 0;
}
