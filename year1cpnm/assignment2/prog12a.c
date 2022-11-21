#include<math.h>
#include<stdio.h>
int main()
{
printf("Enter the length and breadth of rectangle :\n");
double l,b;
scanf("%lf%lf",&l,&b);
double areaofrectangle=l*b,perimeterofrectangle=2*(l+b);
double areaofcircle =areaofrectangle;
double radius = sqrt(double (areaofcircle /3.14));

return 0;
}

