#include <stdio.h>
int main()
{
int n;
printf("Press 1:for binary to octal\n");
printf("Press 2:for binary to decimal\n");
printf("Press 3:for binary to hexadecimal\n");
printf("Press 4:for octal to binary\n");
printf("Press 5:for octal to decimal\n");
printf("Press 6:for octal to hexadecimal\n");
printf("Press 7:for decimal to binary\n");
printf("Press 8:for decimal to octal\n");
printf("Press 9:for decimal to hexadecimal\n");
printf("Press 10:for hexadecimal to binary\n");
printf("Press 11:for hexadecimal to octal\n");
printf("Press 12:for hexadecimal to decimal\n");
scanf("%d",&n);
if(n<1)
{
printf("Err input\n");
return 1;
}
else if (n<10)
{
long m;
scanf("%ld\n",&m);
long bin,oct,dec,hexdec;
switch(n)
{
case 1:
printf("%ld\n",bintooct(m));
break;
case 2:
printf("%ld\n",bintodec(m));
break;
case 3:
printf("%ld\n",bintohexdec(m));
break;
case 4:
printf("%ld\n",octtobin(m));
break;
case 5:
printf("%ld\n",bintodec(octtobin(m));
break;
case 6:
printf("%ld\n",bintohexdec(octtobin(m));
break;
case 7:
printf("%ld\n",dectobin(m));
break;
case 8:
printf("%ld\n",bintooct(dectobin(m));
break;
case 9:
printf("%ld\n",bintohexdec(dectobin(m));
break;
}
