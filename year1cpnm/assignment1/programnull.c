//#include<math.h>
#include<string.h>
#include<stdio.h>


int pow1(int n,int p)
{
int i,k=1;
for( i=1;i<=p;i++)
k*=n;
}


int hextodec()
{
char str[100];
   gets(str);

int l = strlen(str);
int arr[l],i;
for(i=0;i<l;i++)
{
if(str[i]>='0'&&str[i]<='9')
{
arr[i]=str[i]-(int)'0';
}
else if(str[i]>='A'&&str[i]<='F')

{
arr[i]=str[i]-(int)'A'+10;
}
}
int dec =0;
for(i=0;i<l;i++)
{
dec = dec+pow1(16,l-1-i)*arr[i];
}
return dec;
}


int octtodec(int n)
{
int dec =0,i=0;
while(n>0)
{
dec = dec + (n%10)*pow1(8,i++);
n/=10;
}
return dec;
}



int bintodec(int n)
{
int dec =0,i=0;
while(n>0)
{
dec = dec + (n%10)*pow1(2,i++);
n/=10;
}
return dec;
}



int dectobin(int n)
{
if(n==0)
return n;
return dectobin(n/2)*10+n%2;
}


int dectooct(int n)
{
if(n==0)
return n;
return dectobin(n/8)*10+n%8;
};



void dectohexdec(int n)
{
int t =0;
if(n>16)
dectohexdec(n/16);
t=n%16;
if(t>9)
{
printf("%c",(char)(t-10+(int)('A')));
}
else
{
printf("%d",t);
}
}

int main()
{
printf("%d\n",bintodec(10));
printf("%d\n",octtodec(10));
printf("%d\n",hextodec());
printf("%d\n",dectooct(10));
printf("%d\n",dectobin(10));
dectohexdec(-4);
printf("Press 1 : binary to octal \n");
printf("Press 2 : binary to decimal \n");
printf("Press 3 : binary to hexadecimal\n");
printf("Press 4 : octal to binary\n");
printf("Press 4 : octal to decimal\n");
printf("Press 6 : octal to hexadecimal\n");
printf("Press 7 : decimal to binary\n");
printf("Press 8 : decimal to octal\n");
printf("Press 9 : decimal to hexadecimal\n");
printf("Preiss 10 : hexadecimal to binary\n");
printf("Press 11 : hexadecimal to octal\n");
printf("Press 12 : hexadecimal to decimal\n");;
int n;
int c;
scanf("%d\n",&c);
switch(c)
{
case 1:
printf("Enter the number: ");
scanf("%d",&n);
printf("%d\n",dectooct(bintodec(n)));
break;
case 2:
printf("Enter the number: ");
scanf("%d",&n);
printf("%d\n",(bintodec(n)));
break;
case 3:
printf("Enter the number: ");
scanf("%d",&n);
dectohexdec(bintodec(n));
break;
case 4:
printf("Enter the number: ");
scanf("%d",&n);
printf("%d\n",dectobin(octtodec(n)));
break;
case 5:
printf("Enter the number: ");
scanf("%d",&n);
printf("%d\n",(octtodec(n)));
break;
case 6:
printf("Enter the number: ");
scanf("%d",&n);
dectohexdec(octtodec(n));
break;
case 7:
printf("Enter the number: ");
scanf("%d",&n);
printf("%d\n",dectobin(n));
break;
case 8:
printf("Enter the number: ");
scanf("%d",&n);
printf("%d\n",dectooct(n));
break;
case 9:
printf("Enter the number: ");
scanf("%d",&n);
dectohexdec(n);
break;
case 10:
printf("%d\n",dectobin(hextodec()));
break;
case 11:
printf("%d\n",dectooct(hextodec()));
break;
case 12:
printf("%d\n",(hextodec()));
break;
default:
printf("Your existence is a lie\n");
}

return 0;
}

