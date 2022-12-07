#include<stdio.h>
typedef struct {
int exp,coe;
}SP;
int main()
{
printf("Enter the no of elements :\n");
int n;
scanf("%d",&n);
SP arr[n];
printf("Enter the elements \n");
int i;
for( i=0;i<n;i++)
{
scanf("%d%d",&arr[i].coe,&arr[i].exp);
}

printf("Enter no of elements of 2nd polynomial\n");
int m;
scanf("%d",&m);
SP arr2[m];
printf("Enter the elements \n");
for( i=0;i<m;i++)
scanf("%d%d",&arr2[i].coe,&arr2[i].exp);


SP mult[m*n];
printf("%d",m*n);
int j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
mult[i*m+j].exp=arr[i].exp+arr2[j].exp;
mult[i*m+j].coe=arr[i].coe*arr2[j].coe;
}
}


//sort

for( i=0;i<m*n-1;i++)
{
for( j=i+1;j<m*n-1;j++)
{
if(mult[j].coe>mult[j+1].coe)
{
SP temp;
temp = mult[j];
mult[j]=mult[j+1];
mult[j+1]=temp;
}
}
}

for( i=0;i<m*n;i++)
{
if(mult[i].exp==mult[i+1].exp)
{

int k=mult[i].exp;
int e=mult[i].coe;
mult[i].coe=0;

while(k==mult[i].exp)
{
e=e+mult[i].coe;
mult[i].coe=0;
i++;
}
i--;
mult[i].coe=e;
}
}

printf("Multiplied Polynomial\n");
for( i=0;i<m*n;i++)
{
if(mult[i].coe!=0)
{
printf("%dx^%d",&mult[i].coe,&mult[i].exp);
if(i!=m*n-1)
printf("+");
}
}

printf("\n");
return 0;
}

