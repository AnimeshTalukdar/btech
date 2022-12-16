#include<iostream>
using namespace std;

class Shape2D
{
protected:
double Area,Perimeter;
public:
virtual void area()=0;
virtual void perimeter()=0;
virtual void show()=0;
};


class Circle:public Shape2D
{
double r;
public:
Circle (double R)
{
r=R;
}
void area()
{
Area = 3.14*r*r;
}
void perimeter()
{
Perimeter=2*3.14*r;
}
void show()
{
cout<<":Circle:"<<endl;
cout<<"Area:"<<Area<<endl;
cout<<"Perimeter:"<<Perimeter<<endl;
}
};



class Rectangle:public Shape2D
{
double l,b;
public:
Rectangle(double L,double B)
{
l=L;
b=B;
}
void area()
{ 
Area=l*b;
} 
void perimeter()
{
Perimeter= 2*(l+b);
}
void show()
{   
cout<<":Rectangle:"<<endl;
cout<<"Area:"<<Area<<endl;
cout<<"Perimeter:"<<Perimeter<<endl;
} 
};

int main()
{
Shape2D *arr[5];
arr[0]=new Circle(1);
/*
arr[1]=new Circle(2);
arr[2]=new Circle(3);
arr[3]=new Rectangle(1,2);
arr[4]=new Rectangle(2,3);

//Calculating area and perimeter
for(int i=0;i<5;i++)
{
//arr[i]->area();
//arr[i]->perimeter();
}

cout<<"The area and perimeter of 2d shapes are"<<endl;
for(int i=0;i<5;i++)
{
cout<<endl;
//arr[i]->show();
}
*/
return 0;
}
