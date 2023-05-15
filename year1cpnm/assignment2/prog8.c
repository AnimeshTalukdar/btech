#include <stdio.h>
int main()
{
double t;
printf("Enter temperature in farenheit:\n");
scanf("%lf",&t);
double c=(t-32)*5/9;
printf("Temperature in celsius: %.2lf\n",c);
return 0;
}

