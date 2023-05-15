#include<stdio.h>
int main()
{
int i;
printf("Enter the number of elements\n");
int n;
scanf("%d",&n);

printf("Enter the list of integers \n");
int arr[n];
for( i=0;i<n;i++)
scanf("%d",&arr[i]);
//printf("This was done");
for( i=0;i<(n/2);i++)
{
int t=arr[i];
arr[i]=arr[n-i-1];
arr[n-i-1]=t;
}
printf("Reversed Array \n");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
return 0;
}

