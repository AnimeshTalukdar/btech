#include<stdio.h>
struct student
{
int rollno;
char name[100];
char department[100];
char course[100];
int yoj;
};

struct student s[100];
void prry(int n, int y)
{
int i;
for(i=0;i<n;i++)
{
if(s[i].yoj == y)
{
printf("Roll no: %d Name: %s Department: %s Course: %s Year: %d\n",s[i].rollno,s[i].name,s[i].department,s[i].course,s[i].yoj);
}
}
}
void prrr(int n, int r)
{
int i;
for(i=0;i<n;i++)
{
if(s[i].rollno == r)
{
printf("Roll no: %d Name: %s Department: %s Course: %s Year: %d\n",s[i].rollno,s[i].name,s[i].department,s[i].course,s[i].yoj);
}
}
}




int main()
{
int n;
printf("Enter the number of students:\n");
scanf("%d",&n);
int i;
for(i=0;i<n;i++)
{
printf("Enter the roll no  name department course and year of joining of studnet %d: ",i+1);
scanf("%d%s%s%s%d",&s[i].rollno,&s[i].name,&s[i].department,&s[i].course,&s[i].yoj);
}
int c=3;
while(c!=0)
{
printf("Enter 1: for printing the students in a particular year\n");
printf("Enter 2: for printing the details of the students with a particular roll no\n");
printf("Enter 0: to exit\n");
scanf("%d",&c);
switch(c)
{
case 1:{
int y;
printf("Enter the year:");
scanf("%d",&y);
prry(n,y);
return 0;
}
case 2:
{int r;
printf("Enter the roll no:");
scanf("%d",&r);
prrr(n,r);
return 0;
}
case 0:
{return 0;}
default:{
printf("Error input try again\n");
}
}
}
return 0;
}
