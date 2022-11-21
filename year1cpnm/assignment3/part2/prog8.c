#include <stdio.h>
int main()
{
printf("Enter the size of the matrix:");
int k,l;
scanf("%d%d",&k,&l);
printf("Enter the elements of the matrix:\n");
int i,j;
int m[k][l];
for(i=0;i<k;i++)
{
for(j=0;j<l;j++)
{
scanf("%d",&m[i][j]);
}
}
printf("Transpose:\n");
for(i=0;i<l;i++)
{
for(j=0;j<k;j++)
{
printf("%d ",m[j][i]);
}
printf("\n");
}
return 0;
}
