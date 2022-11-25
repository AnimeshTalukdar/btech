#include<iostream>
using namespace std;
class IntArray
{
int *arr;
int cc;
int n;
public:
IntArray(int f=247483647)
{
//cout<<f<<endl;
n=f;
cc=0;
arr= new int [n];
}

IntArray(IntArray &a)
{

arr= new int[a.n];
//cout<<"Made array"<<a.n<<endl;
n=a.n;
//cout<<"Allocated size"<<n<<endl;
cc=a.cc;
//cout<<"Added cc"<<cc<<endl;
for(int i=0;i<cc;i++)
{
arr[i]=a.arr[i];
}
}

int size()
{
return cc;
}

int get(int i)
{
return arr[i];
}

void set(int i,int value)
{
this->arr[i]=value;
if(i+1>this->cc)
{this->cc=i+1;}
}




void add(IntArray &a,IntArray &b)
{
for(int i=0;i<b.size();i++)
{
a.set(i,a.get(i)+b.get(i));
}
}

void reversethis()
{
for(int i=0;i<(this->size())/2;i++)
{
int temp = this->get(i);
this->set(i,this->get(cc-1-i));
this->set(cc-1-i,temp);
}
}

void sort()
{
for(int i=0;i<cc-1;i++)
{
for(int j=i+1;j<cc-1;j++)
{
if(arr[j]>arr[j+1])
{
int t=arr[j];
arr[j]=arr[j+1];
arr[j+1]=t;
}
}
}
}


void printout()
{
for(int i=0;i<cc;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
}
};

int main()
{
IntArray a(3);
a.set(0,1);
a.set(1,2);
a.set(2,3);
cout<<"Initially:";
a.printout();
cout<<"Copied Array:";
IntArray b(a);
b.printout();
b.reversethis();
cout<<"Final product:"<<endl;
a.printout();
b.printout();


return 0;
}
