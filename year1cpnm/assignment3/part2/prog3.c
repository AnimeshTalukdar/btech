#include <stdio.h>
int main()
{
int a[3][3],b[3][3];
printf("Enter the elements of the first array:\n");
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the leements of the second array:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
int c;
printf("Press 1 for sum \n");
printf("Press 2 for difference\n");
printf("Press 3 for product\n");
printf("Enter your choice:");
scanf("%d",&c);
switch(c)
{
case 1:
printf("Sum is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j] + b[i][j]);
}
printf("\n");
}
break;
case 2:
printf("Difference is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j] - b[i][j]);
}
printf("\n");
}
break;
case 3:
printf("Product is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j] * b[i][j]);
}
printf("\n");
}
break;
}
return 0;
}


