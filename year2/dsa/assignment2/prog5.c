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
stack s;
s.head=NULL;
char n[100];
printf("Enter the expression\n");
scanf("%s",&n);
int i=0;
while(n[i]!='\0')
{
push(&s,n[i]);
i++;
}

return 0;
}
