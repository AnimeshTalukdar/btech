#include<iostream>
using namespace std;

// try catch block using argument as a integer and a string

int main()
{
try{
int n;
cout<<"Enter the size of the array"<<endl;
cin>>n;
if(n<=0)
{
string s="Size of array cannot be 0 or negative";
throw s;
}
int arr[n]; 
int i;
int choice=0; 
while(choice!=4) 
{ 
cout<<"Enter 1: to insert into a particular place"<<endl; 
cout<<"Enter 2: to access a paticular place"<<endl; 
cout<<"Enter 3: to print the array"<<endl; 
cout<<"Enter 4: to exit"<<endl; 
cin>>choice; 
switch(choice) 
{ 
case 1:  
cout<<"Enter the position"<<endl; 
cin>>i; 
if(i<0||i>=n)
throw i;
cout<<"Enter the value"<<endl; 
int val;
cin>>val;
break;


case 2:
cout<<"Enter the position"<<endl;
cin>>i;
if(i<0||i>=n)
throw i;
cout<<endl;
cout<<"Item at "<<i<<"th position is "<<arr[i]<<endl;
break;
case 3:
cout<<"Elements of array"<<endl;
for(int j=0;j<n;j++)
{
cout<<arr[j]<<" ";
}
break; 
case 4:
cout<<"Exitting"<<endl;
}
}
}
catch(string& s) 
{
cout<<s<<endl;
}
catch(int& i)
{
cout<<"Array index "<<i<<" out of bounds"<<endl;
}
return 0;
}

