#include<math.h>
#include<stdio.h>
typedef struct{
int exp,coe;
}SP;
int main()
{
printf("Enter the no of elements");
int n;
scanf("%d",&n);
SP arr[n];
printf("Enter the elements \n");
int i;
for(i=0;i<n;i++)
scanf("%d%d",&arr[i].coe,&arr[i].exp);
int k;
printf("Enter the value to evalueate the polynomial\n");
scanf("%d",&k);
int val = 0;
for(i=0;i<n;i++)
{
val = val+arr[i].coe*pow(k,arr[i].exp);
}
printf("Value is:%d\n",val);
return 0;
}

