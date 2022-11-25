#include<iostream>
using namespace std;
 class Vector
{
int n;
int cc;
int *arr;
public:
Vector(int n=2147483647)
{
arr= new int [n];
cc=0;
}

int size()
{
return cc;
}

void setsize(int lm)
{
cc=lm;
}


void push(int k)
{
arr[cc++]=k;
}

int get(int i)
{
return arr[i];
}

void set(int i,int k)
{
arr[i]=k;
if(i>cc)cc=i;
}

void add(Vector& a,Vector& b)
{
for(int i=0;i<b.size();i++)
{
a.set(i,a.get(i)+b.get(i));
}
if(b.size() >a.size())
{
a.setsize( b.size());
}
}

void sub(Vector& a,Vector& b)
{
for(int i=0;i<b.size();i++)
{
a.set(i,a.get(i)-b.get(i));
}
}

bool equality(Vector a,Vector b)
{
bool con=true;
for(int i=0;i<b.size();i++)
{
if(a.get(i)!=b.get(i))
{
con=false;
}
}
return con&&(a.size()==b.size());
}



bool less(Vector a,Vector b)
{
int suma=0,sumb=0;
for(int i=0;i<a.size();i++)
{
suma=suma+a.get(i);
}
for(int i=0;i<b.size();i++)
{
sumb=sumb+b.get(i);
}
return suma<sumb;
}
bool more(Vector a,Vector b)
{
int suma=0,sumb=0;
for(int i=0;i<a.size();i++)
{
suma=suma+a.get(i);
}
for(int i=0;i<b.size();i++)
{
sumb=sumb+b.get(i);
}
return suma>sumb;                         
}

void printout(Vector a)
{
for(int i=0;i<a.size();i++)
{
cout<<a.get(i)<<" ";
}
cout<<endl;
}

};

int main()
{

cout<<"Enter sizes of the two Vectors"<<endl;
int sizea,sizeb;
cin>>sizea>>sizeb;
Vector a(sizea),b(sizeb);

cout<<"Enter the elements of first Vector"<<endl;
for(int i=0;i<sizea;i++)
{
int k;
cin>>k;
a.push(k);
}
cout<<"Enter the elements of the second Vector"<<endl;
for(int i=0;i<sizeb;i++)
{
int k;
cin>>k;
b.push(k);
}
int choice ;
do{
cout<<"1: addition"<<endl;
cout<<"2: substraction"<<endl;
cout<<"3: equality check"<<endl;
cout<<"4: less "<<endl;
cout<<"5: greater"<<endl;
cout<<"6: exit"<<endl;
cout<<"Enter your choice"<<endl;
cin>>choice;
switch(choice)
{
case 1:
a.add(a,b);
cout<<"A+B="<<endl;
a.printout(a);
break;
case 2:
cout<<"A-B ="<<endl;
a.sub(a,b);
a.printout(a);
break;
case 3:
if(a.equality(a,b))
{
cout<<"A is equal to B"<<endl;
}
else
{
cout<<"A is not equal to B"<<endl;
}
break;
case 4:
if(a.less(a,b))
{
cout<<"A isless than  B"<<endl;
}
else
{
cout<<"A is not less than to B"<<endl;
}
break;
case 5:
if(a.more(a,b))
{
cout<<"A is more than B"<<endl;
}
else
{
cout<<"A is not more than to B"<<endl;
}
break;
case 6:
cout<<"Exitting ...."<<endl;
}
}
while(choice!=6); 
return 0;
}
