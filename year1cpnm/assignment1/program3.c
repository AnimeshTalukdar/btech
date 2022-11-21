#include <stdio.h>
int main()
{
printf("Input two numbers:\n");
int n;
scanf("%d",&n);
int m;
scanf("%d",&m);
int fn=n;
int fm=m;
int  i;
for( i=2;i<100;i++)
{
while(fn%i==0&&fm%i==0)
{
fn=fn/i;
fm=fm/i;
}
}
printf("%d divided by %d is\n",n,m);
printf("Fraction: %d/%d\n",fn,fm);
double div=(double)n/m;
printf("Decimal: %lf\n",div);
return 0;
}


