#include<stdio.h>
int main()
{
printf("Enter the length and breadth of rectangle :\n");
double l,b;
scanf("%lf%lf",&l,&b);
double areaofrectangle=l*b,perimeterofrectangle=2*(l+b);
printf("Area of rectangle is: %.2lf\n Perimeter of rectangle is: %.2lf\n",areaofrectangle,perimeterofrectangle);
printf("Enter the radius of circle: \n");
double r;
scanf("%lf",&r);
double areaofcircle = 3.14*r*r,circumferenceofcircle=3.14*2*r;
printf("Area of cicle is: %.2lf\nCircumference of circle is: %.2lf\n",areaofcircle,circumferenceofcircle);
return 0;
}
