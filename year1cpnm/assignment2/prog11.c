#include <stdio.h>
int main()
{
double marks[5];
printf("Enter the marks in five subjects : \n");
int i;
double t,total=0;
for(i=0;i<5;i++)
{
scanf("%lf",&t);
if(t>100||t<0)
{
printf("Error input! \n");
return 0;
}
marks[i]=t;
total =total+t;
}
double percentage = total/5.0;
printf("Aggregate marks obtained : %.2lf \nPercentage of marks obtained: %.2lf\n",total,percentage);
return 0;
}


