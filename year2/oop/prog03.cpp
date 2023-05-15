#include <iostream>
using namespace std;
int main()
{
cout<<"Till which number do you want factorial table to print :"<<endl;
int n;
cin>>n;
int fact=1;
if(n==1)
cout<<"1! = 1"<<endl;
else
{
int i;
for(i=2;i<=n;i++)
{
fact=fact*i;
cout<<i<<"! = "<<fact<<endl;
}
}
return 0;
}
