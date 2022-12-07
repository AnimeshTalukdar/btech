#include<iostream>
using namespace std;
typedef struct node{
int data;
struct node* next = NULL;
}node;
typedef struct largenumber{
struct node* digit = NULL;
}ln;
int strlen1(char *s)
{
int i;
for(i=0;s[i]!='\0';i++);
return i;
}
void insert(ln &n,char *s)
{
n.digit = new node;
node* t = n.digit;
int i= strlen1(s);
while(i--)
{
t->data = s[i]-'0';
if(i!=0) {
t->next = new node;
t = t->next;
}
}
}
void add(ln&n,ln &m)
{
int hold = 0;
node *oldt1;
node *t1=n.digit;
node *t2=m.digit;
while(t1!=NULL&&t2!=NULL)
{
t1->data = t1->data+t2->data+hold;
hold = t1->data/10;
t1->data = t1->data%10;
oldt1= t1;
t1= t1->next;
t2=t2->next;
}
if(t1==NULL)
{
oldt1->next = new node;
t1= oldt1->next;
while(t2!=NULL)
{
t1->data = hold + t2->data;
hold=t1->data/10;
t1->data= t1->data%10;

t2=t2->next;
if(t2!=NULL)
{
t1->next= new node;
t1=t1->next;
}

}
}
}
void printnodes(node * n)
{
if(n->next == NULL)
cout<<n->data;
else
{
printnodes(n->next);
cout<<n->data;
}
}
void printlongn(ln n)
{
printnodes(n.digit);
}
int main(){
ln n,m;
cout<<"Enter the first long number: "<<endl;
char s1[100];
cin>>s1;
cout<<"Enter the second long number: "<<endl;
char s2[100];
cin>>s2;
insert(n,s1);
insert(m,s2);
cout<<"Added long number:"<<endl;
add(n,m);
printlongn(n);
cout<<endl;
return 0;
}








