#include<stdlib.h>
#include<stdio.h>
typedef struct node{
struct node* next;
int data;
}node;

typedef struct stack{
node* head;
}stack;

int top(stack *s)
{
if(s->head!=NULL)
return s->head->data;
else
return 0;
}

void push(stack *s,int n)
{
if(s->head==NULL)
{
s->head=(node*)malloc(sizeof(node));
s->head->data=n;
s->head->next=NULL;

return ;
}
node *t;
t=s->head;
while(t->next!=NULL)
{
t=t->next;
}
t->next=(node*) malloc(sizeof(node));
t=t->next;
t->next=NULL;
t->data=n;
}
void printout(stack *s)
{
node *t=s->head;
int count=0;
while(t!=NULL)
{
printf( "%d ",t->data);
count++;
t=t->next;
}
printf("\n");
 return ;
}

int size(stack *s)
{
node *t=s->head;
int count=0;
while(t!=NULL)
{
count++;
t=t->next;
}
return count;
}

int pop(stack *s)
{
int n=s->head->data;
s->head=s->head->next;
return n;
}

int main()
{
int t;
stack s;
s.head=NULL;
int choice;
do
{
printf("Enter 1 for pop \n");
printf("Enter 2 for push\n");   
printf("Enter 3 for top\n");   
printf("Enter 4 for size\n");   
printf("Enter 5 for print\n");
printf("Enter 6 for exit\n");
printf("Enter your choice:");
scanf("%d",&choice);   
switch(choice)
{
case 1:
pop(&s);
break;
case 2:
printf("Enter the number to be pushed\n");
scanf("%d",&t);
push(&s,t);
break;
case 3:
printf("The number at the top is %d\n",top(&s));
break;
case 4:
printf("The size of the stack is %d\n",size(&s));
break;
case 5:
printout(&s);
break;
}
}while(choice!=6);
return 0;
}
