#include <iostream>
using namespace std;
class rectangle
{
public:
int l,b;
rectangle()
{
l=0;
b=0;
}
rectangle(int L,int B)
{
l=L;
b=B;
}
int area()
{
return l*b;
}
};


int main()
{
rectangle A,B,C,D;
int l,b;
cout<<"Enter the sides of rectangle A"<<endl;
cin>>l>>b;
A.l=l;
A.b=b;
cout<<"Enter the sides of rectangle B"<<endl;
cin>>l>>b;
B.l=l;
B.b=b;
cout<<"Enter the sides of rectangle C"<<endl;
cin>>l>>b;
C.l=l;
C.b=b;
cout<<"Enter the sides of rectangle D"<<endl;
cin>>l>>b;
D.l=l;
D.b=b;
cout<<"Area of A ="<<A.area()<<endl;

cout<<"Area of B ="<<B.area()<<endl;

cout<<"Area of C ="<<C.area()<<endl;

cout<<"Area of D ="<<D.area()<<endl;
return 0;
}
