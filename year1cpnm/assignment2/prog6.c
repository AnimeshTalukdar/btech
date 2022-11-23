#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("Maximum number is: %d\n",a);
else if(b>a&&b>c)
printf("Maximum	number is: %d\n",b);
else
printf("Maximum	number is: %d\n",c);
if(a<b&&a<c)
printf("Minimum	number is: %d\n",a);
else if(b<a&&b<c)
printf("Minimum number is: %d\n",b);
else
printf("Minimum number is: %d\n",c);
return 0;
}






