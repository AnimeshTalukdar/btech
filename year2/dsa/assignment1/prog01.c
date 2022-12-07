#include<stdio.h> 
int main()
{
int arr[10];
printf("Enter elements of array:");
int i;
for( i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
//deletig 6th no 
for(i=6;i<10;i++)
{arr[i-1]=arr[i];}
arr[9]=0;
//deleting 3rd no
for(i=3;i<10;i++)
{arr[i-1]=arr[i];}
arr[9]=0;
printf("%d\n",arr[4]);
return 0;
}

