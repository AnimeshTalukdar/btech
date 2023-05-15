#include<stdio.h>
typedef struct element
{
int row , col , val;
}element;
typedef struct matrix
{
int n , r , c;
element a[100];
}matrix;
int main()
{
matrix m;
printf("Enter the dimensions of the matrix\n");
scanf("%d %d" , &m.r , &m.c);
printf("Enter the number of non-zero elements of the matrix\n");
scanf("%d" , &m.n);
int i;
for(i=0 ; i<m.n ; i++)
{
printf("Index of row of element %d : " , i+1);
scanf("%d" , &m.a[i].row);
printf("Index of column of element %d : " , i+1);
scanf("%d" , &m.a[i].col);
printf("Value of the element %d : " , i+1);
scanf("%d" , &m.a[i].val);
}
int x=0  , y=0 , sum=0;
while(x<m.r)
{
if(x==m.a[y].row)
{
sum++ , y++;
}
else
{
printf("The number of non-zero elements in row of index %d of the matrix is %d\n" , x  , sum);
sum=0;
x++;
}
}
return 0;
}
