#include<stdio.h>
int main()
{
printf("Enter the length and breadth of rectangle :\n");
double l,b;
scanf("%lf%lf",&l,&b);
double areaofrectangle=l*b,perimeterofrectangle=2*(l+b);
double perimeterofcircle=perimeterofrectangle;
double radius = perimeterofcircle/6.28;
double areaofcircle = 3.14*radius*radius;
double ratio = areaofrectangle/areaofcircle;
printf("Radius of circle : %.2lf\nRatio of area of rectangle and area of circle: %.2lf:1\n",radius,ratio);
return 0;
}

