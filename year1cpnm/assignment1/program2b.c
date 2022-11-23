#include <stdio.h>
int main()
{
int n;
printf("What is the amount of money you want to withdraw?\n");
scanf("%d",&n);
int d100,d50,d10;
d100=n/100;
d50=(n-(d100)*100)/50;
d10=(n-(d100)*100-d50*50)/10;
printf(" Rs. 100 notes: %d\n Rs. 50 notes: %d\n Rs. 10 notes: %d\n",d100,d50,d10);
return 0;
}
