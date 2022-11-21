#include <iostream>
using namespace std;
inline int add(int a,int b,int c)
{
return a+b+c;
}
int main()
{
cout<<"Enter three numbers: "<<endl;
int a ,b,c;
cin>>a>>b>>c;
cout<<endl;
int sum = add(a,b,c);
cout<<endl<<a<<"+"<<b<<"+"<<c<<"="<<sum<<endl;
return 0;
}
