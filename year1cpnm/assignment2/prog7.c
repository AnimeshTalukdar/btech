#include <stdio.h>
int main()
{
double a,b,c;
printf("Enter three numbers:\n");
scanf("%lf%lf%lf",&a,&b,&c);
double average = a+b+c;
average =average/3.0;
printf("Number below average are: ");
if(a<average)
printf("%.2lf ",a);
if(b<average)
printf("%.2lf ",b);
if(c<average)
printf("%.2lf ",c);
printf("\nNumbers above average are: ");
if(a>=average)
printf("%.2lf ",a);
if(b>=average)
printf("%.2lf ",b);
if(c>=average)
printf("%.2lf ",c);
printf("\n");
return 0;
}
