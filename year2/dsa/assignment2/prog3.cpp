#include<iostream>
using namespace std;
typedef struct node{
node* next=NULL;
node* prev=NULL;
int data=0;
}node;

typedef struct doublylinkedlist{
node * head;
}doublylinkedlist;

void insert(doublylinkedlist &d,int i,int n)
{
node* temp;
node *t = d.head;
if(t==NULL)
{
d.head=new node;
t=d.head;
t->data=n;
return;
}
while(i--)
{
if(t->next=NULL)
{t->next=new node;
t->next->prev=t;
}
t=t->next;

}
if(t->next==NULL)
t->data=n;
else
{
temp = new node;
temp->prev=t;
temp->next=t->next;
t->next=temp;
temp->next->prev=temp;
}
}

void deletenode(doublylinkedlist &d,int i)
{
node* t= d.head;
while(i--)
{
t=t->next;
}
t->next->prev=t->prev;
t->prev->next=t->next;
}

int size(doublylinkedlist &d)
{
int i=0;
node * t = d.head;
while(t!=NULL)
{
i++;
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

void printReverse(doublylinkedlist &l)
{
 printReverse(l.head);
cout<<endl;
}

void reverseList(doublylinkedlist &d)
{
}

int main() {
doublylinkedlist n;
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

