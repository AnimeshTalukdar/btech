#include <stdio.h>
int main()
{
int n;
printf("Enter the 3 digit number to find all the combinations of :");
scanf("%d",&n);
int a[3];
a[0]=n/100,a[1]=(n%100)/10,a[2]=n%10;

printf("%d%d%d\n",a[0],a[1],a[2]);
printf("%d%d%d\n",a[0],a[2],a[1]);
printf("%d%d%d\n",a[1],a[0],a[2]);
printf("%d%d%d\n",a[1],a[2],a[0]);

printf("%d%d%d\n",a[2],a[1],a[0]);

printf("%d%d%d\n",a[2],a[0],a[1]);
return 0;
}
