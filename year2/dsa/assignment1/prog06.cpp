#include<string.h>
#include<iostream>
using namespace std;
int main()
{
int p=0;
cout<<"Enter two large numbers: "<<endl;
char n1[100],n2[100];
cin>>n1>>n2;

char sum[100];
int n=strlen(n1);
int m=strlen(n2);
cout<<n<<m;
int l=n>m?m:n;
int hold=0;
int i;
for( i=0;i<l;i++)
{
int f1=n1[n-i]-'0';
int f2=n2[m-i]-'0';
int s=f1+f2+hold;
hold=0;
while(s>9)
{
s=s-10;
hold++;
}
sum[p++]=s;;
}

if(n>m)
{
for( i=m;i<n;i++)
{
int f1=n1[n-i]-'0';
int s=f1+hold;
hold=0;
while(s>9)
{
s=s-10;
hold++;
}
sum[p++]=s;
}}

if(m>n)
{

for( i=n;i<m;i++)
{
int f2=n2[m-i]-'0';
int s=f2+hold;
hold=0;
while(s>9)
{
s=s-10;
hold++;
}
sum[p++]=s;
}
}

while(hold!=0)
{
sum[p++]=hold%10;
hold=hold/10;
}


cout<<"Sum is "<<sum<<endl;

return 0;
}
