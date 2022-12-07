#include<iostream>
using namespace std; 
int main()
{
int arr[10];
cout<<"Enter elements of array:";
for(int i=0;i<10;i++)
{
cin>>arr[i];
}
//deletig 6th no 
for(int i=6;i<10;i++)
{arr[i-1]=arr[i];}
arr[9]=0;
//deleting 3rd no
for(int i=3;i<10;i++)
{arr[i-1]=arr[i];}
arr[9]=0;
cout<<arr[4]<<endl;
return 0;
}

