#include <stdio.h>
int main()
{
printf("Enter two numbers:\n");
int a,b;
scanf("%d%d",&a,&b);
int t;
t=a;
a=b;
b=t;
printf("Swapped values : \n %d %d\n",a,b);
return 0;
}

