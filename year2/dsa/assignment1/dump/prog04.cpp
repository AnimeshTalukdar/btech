#include<math.h>
#include<iostream>
using namespace std;
typedef struct{
int exp,coe;
}SP;
int main()
{
cout<<"Enter the no of elements";
int n;
cin>>n;
SP arr[n];
cout<<"Enter the elements "<<endl;
for(int i=0;i<n;i++)
cin>>arr[i].coe>>arr[i].exp;
int k;
cout<<"Enter the value to evalueate the polynomial"<<endl;
cin>>k;
int val = 0;
for(int i=0;i<n;i++)
{
val = val+arr[i].coe*pow(k,arr[i].exp);
}
cout<<"Value is:"<<val<<endl;
return 0;
}
