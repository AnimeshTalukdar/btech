#include <iostream>
using namespace std;
int main()
{
cout<<"Enter the lsit of integers ";
int arr[10];
for(int i=0;i<10;i++)
cin>>arr[i];
for(int i=0;i<5;i++)
{
int t=arr[i];
arr[i]=arr[10-i-1];
arr[10-i-1]=t;
}
cout<<"REversed Array "<<endl;
for(int i=0;i<10;i++)
cout<<arr[i]<<" ";
cout<<endl;
return 0;
}
