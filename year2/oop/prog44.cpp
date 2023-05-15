#include<iostream>
using namespace std;



class Shape
{
protected:
string name;
public:
virtual void getDetails()=0;
};

class TwoDShape :public Shape
{
protected:
double area;
public:
TwoDShape()
{
name="TwoDShape: ";
}
virtual double getArea()=0;
void getDetails()
{
cout<<"Name:"<<name<<endl;
cout<<"Area:"<<getArea()<<endl;
}
};

class Circle :public TwoDShape
{
double r;
public:
Circle(int r)
{
name=name+"Circle";
this->r=r;
}
double getArea()
{
area=3.14*r*r;
return area;
}
};

class Triangle:public TwoDShape
{
double b,h;
public:
Triangle(double b, double h)
{
this->b=b;
this->h=h;
name=name+"Triangle";
}
double getArea()
{
area=0.5*b*h;
return area;
}
};

class Ellipse: public TwoDShape
{
double a,b;
public:
Ellipse(double a,double b)
{
this->a=a;
this->b=b;
name=name+"Ellipse";
}
double getArea()
{
area=3.14*a*b;
return area;
}
};



class ThreeDShape :public Shape 
{ 
protected: 
double area,volume;
public:
ThreeDShape() {
name="ThreeDShape: ";
}
virtual double getArea()=0;
virtual double getVolume()=0;
void getDetails()
{
cout<<"Name:"<<name<<endl;
cout<<"Area:"<<getArea()<<endl;
cout<<"Volume:"<<getVolume()<<endl;
}
};
class Sphere :public ThreeDShape
{
double r;
public:
Sphere(double r)
{
this->r = r;
name=name+"Sphere";
}
double getArea()
{
area=4*3.14*r*r;
return area;
}
double getVolume()
{
volume=4/3*3.14*r*r*r;
return volume;
}
};

class Cube :public ThreeDShape 
{
double side;
public: 
Cube(double side)
{
this->side = side;
name = name+"Cube";
}
double getArea()
{
area=6*side*side;
return area;
}
double getVolume()
{
volume=side*side*side;
return volume;
}
};


int main()
{
Circle a(1);
cout<<a.getArea()<<endl;
Triangle b(1,2);
cout<<b.getArea()<<endl;
Ellipse c(3,3);
cout<<c.getArea()<<endl;
a.getDetails();
b.getDetails();
c.getDetails();
Sphere d(1);
Cube e(1);
d.getDetails();
e.getDetails();

return 0;
}
