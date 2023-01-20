#include<iostream>
using namespace std;




class Quadratic 
{
int a,b,c;

public:
Quadratic ( int a=0,int b=0,int c=0)
{
this->a=a;
this->b=b;
this->c=c;
}

Quadratic operator + ( const Quadratic &other)
{
Quadratic temp(this->a+other.a,this->b+other.b,this->c+other.c);
return temp;
}

friend ostream& operator << ( ostream& os,const Quadratic & other)
{
os<<other.a<<"x^2 +"<<other.b<<"x +"<<c<<endl;
return os;
}

friend istream& operator >> (istream & is , Quadratic & other )
{
is>>other.a>>other.b>>other.c;
return is;
}

double calculatefor(int x)
{
return (double)a*x*x+b*x+c;
}

};


