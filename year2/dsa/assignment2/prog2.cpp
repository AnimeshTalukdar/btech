#include<iostream>
using namespace std;
typedef struct node
{
int data=0;
node* next=NULL;
}node;
typedef struct circularlist
{
node* head = NULL;
}circularlist;

int main()
{
cout<<"Enter the number of participants in the josephus game"<<endl;
int n;
cin>>n;
circularlist l;
node *t = new node;
l.head=t;
t->data=0;

for(int i=1;i<n-1;i++)
{
t->next=new node;
t=t->next;
t->data =i;
}

t->next=new node;
t=t->next;
t->data=n-1;

t->next=l.head;
t=l.head;

while(t!=t->next)
{
//cout<<t->data<<t->next->data<<t->next->next->data<<endl;
t->next=t->next->next;
t=t->next;
}
cout<<"Stay at the "<<t->data<<"th position to survive"<<endl;
return 0;
}
