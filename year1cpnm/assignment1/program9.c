#include<stdio.h>
int main()
{
printf("Enter the size: ");
int size;
scanf("%d",&size);
int arr[size];
printf("Enter the elements of the array:\n");
int i;
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("Swapped array: \n");
for (i=0;i<size/2;i++)
{
int t=arr[i];
arr[i]=arr[size-1-i];
arr[size-1-i]=t;
}
printf("Reversed Array : ");
for(i=0;i<size;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}

