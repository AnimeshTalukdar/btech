#include<iostream>
using namespace std;
typedef struct polynomial
{
struct polynomial node;
int coe;
}P;

int main()
{
cout<<"Enter two numbers:"<<endl;
string n1,n2;
cin>>n1>>n2;
P m1;
P m2;
m1.node=NULL;
m2.node=NULL;
int l1=strlen(n1);
int l2=strlen(n2);
m1.coe=m1[l1-1];
for(int i=l1-2;i>=0;i--)
{
P temp = malloc(P);
m1.node=temp;
temp.node=NULL;
temp.coe=n1[i]-'0';
}
m2.coe=
