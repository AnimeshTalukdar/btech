#include <stdio.h>
int formulate(int n)
{
if(n==1)
{
//printf("Next value is: %d\n",1);
return 1;
}
else
{
if(n%2==1)
{
printf("Next value is: %d\n",n*3+1);
return formulate((n*3+1))+1;
}
else
{
printf("Next value is: %d\n",n/2);
return formulate((n/2))+1;
}
}
}
int main()
{
int n;
int operations=0;
printf("Enter the initial value:");
scanf("%d",&n);
printf("Initial value is: %d\n",n);
operations =formulate(n)-1;
printf("No of operations is: %d\n",operations);
return 0;
}

