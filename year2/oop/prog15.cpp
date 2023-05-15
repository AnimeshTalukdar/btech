#include<iostream>
using namespace std;
int max(int a,int b,int c)
{
if(a>b&&a>c)
return a;
else if(b>c&&b>a)
return b;
else return c;
}
int max(int arr[],int l)
{
int max=arr[0];
for(int i=0;i<l;i++)
{
if(arr[i]>max)
max=arr[i];
}
return max;
}
int main()
{
cout<<"Enter the number of elements: "<<endl;
int n;
cin>>n;
int arr[n];
cout<<endl<<"Enter the elements :"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int m;
if(n==3)
m=max(arr[0],arr[1],arr[2]);
else
m=max(arr,n);
cout<<"Max number is "<<m<<endl;
return 0;
}
