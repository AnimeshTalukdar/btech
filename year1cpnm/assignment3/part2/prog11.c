#include<math.h>
#include <stdio.h>
int main()
{
int n; 
printf("How many numbers would you like to enter:");
scanf("%d",&n);
double arr[n];
int i;
double sum=0;
for(i=0;i<n;i++)
{
scanf("%lf",&arr[i]);
sum=sum+arr[i];
}
double mean=sum/n;
double standarddeviation=0;
for(i=0;i<n;i++)
{
standarddeviation=(standarddeviation-mean)*(standarddeviation-mean);
}
standarddeviation=sqrt(standarddeviation/(n-1));
printf("%.2lf\n",standarddeviation);
return 0;
}

