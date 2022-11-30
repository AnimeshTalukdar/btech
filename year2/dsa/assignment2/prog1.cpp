#include<iostream>
using namespace std;
typedef struct node
{
int data=0;
node *next=NULL;
}node;

typedef struct linkedlist
{
node *head=NULL;
}linkedlist;

void insert(linkedlist &l,int i,int n)
{
node *t=l.head;
if(t==NULL)
{
l.head=new node;
l.head->data=n;
return;
}
while(i--)
{
if(t->next==NULL)
t->next=new node;
t=t->next;
}
if(t->next==NULL)
{
t->data=n;
return;
}
int k=t->data;
t->data=n;
node* x=new node;
x->next=t->next;
x->data=k;
t->next=x;
}

void deletenode(linkedlist &l,int i)
{
if(i==0)
{
l.head=l.head->next;
return;
}
node *t = l.head;
i--;
while(i--)
{
t=t->next;
}
t->next=t->next->next;
}

int size(linkedlist &l)
{
int i=0;
node * t= l.head;
while(t!=NULL)
{i++;
t=t->next;
}
return i;
}

void printReverse (node *n)
{
if(n==NULL)
{
return ;
}
else {
printReverse(n->next);
cout<<n->data<<" ";
}
}

void printReverse(linkedlist &l)
{
 printReverse(l.head);
cout<<endl;
}

node* reverseList(node* n)
{
if(n==NULL)
{
return n;
}
node* k=reverseList(n);
n->next->next=n;
return n->next;
}

void reverseList(linkedlist &l)
{
node * t= l.head;

int n=size(l);
int arr[n];
for(int i=0;i<n;i++)
{
arr[i]=t->data;
t=t->next;
}
t=l.head;
for(int i=n-1;i>=0;i--)
{
t->data=arr[i];
t=t->next;
}
}

int main() {
linkedlist n;
int choice;
int i,v;
do{
cout<<" 1. Insert a node at a specified position"<<endl;
cout<<" 2. Delete a node from a specified position"<<endl;
cout<<" 3. Count the number of nodes in the linked list."<<endl;
cout<<" 4. Reverse print the linked list."<<endl;
cout<<" 5. Reverse the linked list."<<endl;
cout<<" 6. Exit"<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter the position and the value of the element to be inserted"<<endl;
cin>>i>>v;
insert(n,i,v);
break;

case 2:
cout<<"Enter the position of the value to be deleted"<<endl;

cin>>i;
deletenode(n,i);
break;

case 3:
cout<<"The size of the list is "<<size(n)<<endl;
break;

case 4:
cout<<"Printing the reverse of the list"<<endl;
printReverse(n);
break;

case 5:
cout<<"Reversing list ..."<<endl;
reverseList(n);
break;

case 6:
cout<<"Exitting...."<<endl;
}
}while(choice!=6);
return 0;
}

