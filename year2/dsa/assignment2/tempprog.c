#include<stdlib.h>
#include<stdio.h>
typedef struct node{
struct node* next;
}node;
int main()
{
long long l=2;
node* t=(node*) malloc(sizeof(node));
while (t||l)
{
if(l*l!=0)
l=l*l;
printf("%ld\n",l);
t->next=(node*) malloc (l*sizeof(node));
t=t->next;
int temp;
//scanf("%d",&temp);

}
return 0;
}
