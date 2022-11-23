#include <stdio.h>
int main()
{
printf("Enter 10 numbers to be sorted :");
int a[10];
int i;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
int j;
for(i=0;i<9;i++)
{
for(j=0;j<9;j++)
{
if(a[j]>a[j+1])
{
int t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
for(i=0;i<10;i++)
{
printf("%d ",a[i]);
}
printf("\n");
return 0;
}
