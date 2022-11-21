#include <stdio.h>
struct student {
char name[100];
int roll;
int math,ds,cn,wn,os;
double avg;
};
int main()
{
printf("Enter the number of students : ");
int n;
scanf("%d",&n);
struct student arr[n];
int i;
for(i=0;i<n;i++)
{
printf("Enter the name of student %d: ",i+1);
scanf("%s",&arr[i].name);
printf("Enter the roll number of %s : ",arr[i].name);
scanf("%d",&arr[i].roll);
printf("Enter the marks in Math of student %s : ",arr[i].name);
scanf("%d",&arr[i].math);
printf("Enter the marks in DS of student %s : ",arr[i].name);
scanf("%d",&arr[i].ds);

printf("Enter the marks in CN of student %s : ",arr[i].name);
scanf("%d",&arr[i].cn);

printf("Enter the marks in WN of student %s : ",arr[i].name);
scanf("%d",&arr[i].wn);
printf("Enter the marks in OS of student %s : ",arr[i].name);
scanf("%d",&arr[i].os);

arr[i].avg=(arr[i].math+arr[i].ds+arr[i].cn+arr[i].wn+arr[i].os)/5.0;
}
int j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(arr[j].avg<arr[j+1].avg)
{
struct student temp ;
temp = arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("Name        Roll    Math  DS   CN   WN   OS  Average\n");
for(i=0;i<5;i++)
{
printf("%10s %5d  %5d  %3d  %3d  %3d  %3d  %3lf\n",arr[i].name,arr[i].roll,arr[i].math,arr[i].ds,arr[i].cn,arr[i].wn,arr[i].os,arr[i].avg);
}
return 0;
}

