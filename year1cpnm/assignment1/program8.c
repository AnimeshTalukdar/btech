#include<stdio.h>
int happynumber(int n,int k)
{
int t,sum=0;
int n1=n;
while(n>0)
{
t=n%10;
n/=10;
sum=sum+t*t;
}
if(k==100)
return 0;
if(sum==1)
{
return 1;
}
else
{
return(happynumber(sum,k+1));
}
}


int ishappynumber(int n)
{
return (happynumber(n,0));
}

int main()
{
int i,c=0;
printf("These are first 10 happy numbers:\n");
for(i=0;c<10;i++)
{
if(ishappynumber(i)==1)
{
printf("%d\n",i);
c++;
}
}
return 0;
}


