#include<stdio.h>
int main()
{
int n=5;
int marks[n][n],totalmarks[5]={0};
int i,j;
for(i=0;i<n;i++)
{
printf("Enter the marks of student %d\n",i+1);
for(j=0;j<n;j++)
scanf("%d",&marks[i][j]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
totalmarks[i]=totalmarks[i]+marks[i][j];
}
}
int max=totalmarks[0];
for(i=0;i<n;i++)
{
printf("Total marks of student %d is : %d\n",i+1,totalmarks[i]);
if(totalmarks[i]>max)
max=totalmarks[i];
}
printf("Highest total marks is : %d\n",max);
return 0;
}
