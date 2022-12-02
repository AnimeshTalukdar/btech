#include<iostream>
using namespace std;


class Complex
{
double real;
double img;

public :
void setReal(double a)
{
real = a;
}
void setImg(double b)
{
img = b;
}

double getReal ()
{
return real;
}

double getImg()
{
return img;
}

void disp()
{
cout<<getReal()<<"+"<<getImg()<<"i"<<endl;
}

Complex sum(Complex ob1,Complex ob2)
{
Complex sum;
sum.setReal ( ob1.getReal()+ob2.getReal());
sum.setImg(ob1.getImg()+ob2.getImg());
return sum;
}
};
int main()
{
Complex ob1,ob2,sum;
cout<<"Enter the real value of first complex number"<<endl;
double t;
cin>>t;
ob1.setReal(t);
cout<<"Enter the imaginary value of first complex number"<<endl;
cin>>t;
ob1.setImg(t);
cout<<"Enter the real value of second complex number"<<endl;
cin>>t;
ob2.setReal(t);
cout<<"Enter the imaginary value of second complex number"<<endl;
cin>>t;
ob2.setImg(t);
cout<<"Added complex number is : ";
sum=ob1.sum(ob1,ob2);
sum.disp();
return 0;


}
