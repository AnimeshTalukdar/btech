#include <iostream>
using namespace std;
long fact(const long& n) 
{
if(n==0)
return 1;
else
return n*fact(n-1);
}
int main()
{
cout<<"Enter a number to find the factorial of : "<<endl;
int n;
cin>>n;
int f = fact ( n);
cout<<"factorial of " <<n << " is " << f<<endl;
return 0;
}



