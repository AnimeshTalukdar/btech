#include<stdio.h>
typedef struct {
int exp,coe;
}SP;
int main()
{
printf("Enter the no of elements :\n");
int n,i;
scanf("%d",&n);
SP arr[n];
printf("Enter the elements \n");
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
SP sum[m+n];
for( i=0;i<m+n;i++)
sum[i].exp=-1;

int j,c=0;
for(i=0,j=0;i<n&&j<m;)
{
if(arr[i].exp<arr2[j].exp)
{
sum[c].exp=arr[i].exp;
sum[c].coe=arr[i].coe;
i++;c++;
}
else if (arr[i].exp>arr2[j].exp)
{
sum[c].exp>arr2[j].exp;
sum[c].coe=arr2[j].coe;
j++;c++;
}
else
{
sum[c].exp=arr[i].exp;
sum[c].coe=arr[i].coe+arr2[j].coe;
i++;j++;c++;
}
}
while(j<m)
{
sum[c].exp=arr2[j].exp;
sum[c].coe=arr2[j].coe;
c++;j++;
}
while(i<n)
{
sum[c].exp=arr[i].exp;
sum[c].coe=arr[i].coe;
c++;i++;
}
printf("Added Polynomial\n");
for(i=0;i<c-1;i++)
{
printf("%dx^%d+",sum[i].coe,sum[i].exp);
}
printf("%dx^%d\n",sum[i].coe,sum[i].exp);
return 0;
}

