#include<iostream>
using namespace std;

class Stack
{
int cc;
int *buffer,top;
public: 
Stack (int size)
{
buffer = new int[size];
cc=0;
}

void push(int n)
{
buffer[cc++]=n;
top=n;
}

void pop()
{
cc--;
top=buffer[cc-1];
}

void disp() 
{ 
for(int i=cc-1;i>=0;i--) 
{ 
cout<<buffer[i]<<" ";
}
cc=0;
cout<<endl;
}

};

int main()
{
Stack st(10);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.pop();
st.pop();
st.disp();
return 0;
}
