#include<iostream>
using namespace std;


class Queue 
{
int *data; 
int front ,rear;
public :
Queue(int size)
{
front =0;
rear =0;
data=new int[size];
}

void add(int a)
{
data[rear++]=a;
}

int remove()
{
return data[front++];
}

void disp()
{
for(int i=front;i<rear;i++)
{
cout<<data[i]<<" ";
}
cout<<endl;
}

};

int main()
{
Queue a(10);
a.add(2);
a.add(3);
a.add(4);
a.add(5);
a.remove();
a.remove();
a.disp();
return 0;
}
