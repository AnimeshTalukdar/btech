#include <stdio.h>
int sumofdivisors(int n)
{
int s=0;
int i;
for(i=1;i<n;i++)
{
if(n%i==0)
{
s+=i;
}
}
return s;
}
int isamicable(int n,int m)
{
if(sumofdivisors(n)==m&&sumofdivisors(m)==n)
{
return 1;
}
return 0;
}
int main()
{
printf("Enter two numbers to find if they are amicable: ");
int n,m;
scanf("%d%d",&n,&m);
if(isamicable(n,m))
{
printf("%d and %d are amicable\n",n,m);
}
else
printf("%d and %d are not amicable\n",n,m);
return 0;
}

