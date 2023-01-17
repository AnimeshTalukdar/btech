#include<stdio.h>
typedef struct element
{
int row , col , val;
}element;
typedef struct matrix
{
int n;
element a[100];
}matrix;
int main()
{
matrix m[2];
printf("Enter the dimensions of the two matrices\n");
int r , c;
scanf("%d %d" , &r , &c);
int i , j;
for(j=0 ; j<2 ; j++)
{
printf("Enter the number of non-zero elements of matrix %d : " , j+1);
scanf("%d" , &m[j].n);
for(i=0 ; i<m[j].n ; i++)
{
printf("Index of row of element %d of matrix %d : " , i+1 , j+1);
scanf("%d" , &m[j].a[i].row);
printf("Index of column of element %d of matrix %d : " , i+1 , j+1);
scanf("%d" , &m[j].a[i].col);
printf("Value of the element %d of matrix %d : " , i+1 , j+1);
scanf("%d" , &m[j].a[i].val);
}
}
int p[r][c] , x=0 , y=0;
for(i=0 ; i<r ; i++)
{
for(j=0 ; j<c ; j++)
{
if((i==m[0].a[x].row && i==m[1].a[y].row) && (j==m[0].a[x].col && j==m[1].a[y].col))
{
p[i][j]=m[0].a[x].val+m[1].a[y].val;
x++ , y++;
}
else if((i==m[0].a[x].row && j==m[0].a[x].col) && (i!=m[1].a[y].row || j!=m[1].a[y].col))
{
p[i][j]=m[0].a[x].val;
x++;
}
else if((i!=m[0].a[x].row || j!=m[0].a[x].col) && (i==m[1].a[y].row && j==m[1].a[y].col))
{
p[i][j]=m[1].a[y].val;
y++;
}
else
p[i][j]=0;
}
}
printf("The resulting array is------\n");
for(i=0 ; i<r ; i++)
{
for(j=0 ; j<c ; j++)
printf("%d " , p[i][j]);
printf("\n");
}
return 0;
}
