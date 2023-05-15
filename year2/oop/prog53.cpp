#include<iostream>
using namespace std;


class Stack 
{
int * stack ;
int start,end;
const int size;
public :
Stack ( const int n=1000) :size(n) 
{
start = 0;
end = 0;
stack = new int [size];
}

void push(const int n)
{
if(end==size)
{
string s= "Exception: Full Stack";
throw s;
}
stack[end++]=n;
}

int pop()
{
if(start>=end)
{
string s="Exception: Empty stack";
throw s;
}
return stack[start++];
}
};

int main(){
Stack s(2);
try{
s.push(1);
s.push(2);
//s.push(3);
s.pop();
s.pop();
s.pop();
}
catch (string& s)
{
cout<<s<<endl;
}
return 0;
}
