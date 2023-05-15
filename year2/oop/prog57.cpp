#include<iostream>
using namespace std;

class Complex {
private:
double real;
double imag;

public:
Complex(double real = 0, double imag = 0) {
this->real=real;
this->imag=imag;
}

double getReal() { 
return real; 
}
double getImag() { 
  return imag; 
}
void setReal(double real) { 
this->real = real; 
}


void setImag(double imag) { 
this->imag = imag; 
}


Complex& operator=(const Complex& other) {
real = other.real;
imag = other.imag;
return *this;
}


Complex operator+(const Complex& other) {
return Complex(real + other.real, imag + other.imag);
}

Complex operator-(const Complex& other) {
return Complex(real - other.real, imag - other.imag);
}

Complex operator*(const Complex& other) {
return Complex(real * other.real - imag * other.imag,
real * other.imag + imag * other.real);
}

Complex operator/(const Complex& other) {
double denominator = other.real * other.real + other.imag * other.imag;
return Complex((real * other.real + imag * other.imag) / denominator,
(imag * other.real - real * other.imag) / denominator);
}

int operator>(const Complex& other)
{
if(real>other.real)
return 1;
else if (real ==other.real&&imag>other.imag)
return 1;
return 0;
}
int operator<(const Complex& other)
{
if(real>other.real)
return 0;
else if (real ==other.real&&imag>other.imag)
return 0;
return 1;
}

void display()
{
cout<<real<<"+"<<imag<<"i"<<endl;
}
};

template <class T>
void swamp(T &a,T &b)
{
T c;
c= a;
a=b;
b=c;
}


int main()
{
Complex a(1,2),b(2,1);
a.display();
b.display();
swap(a,b);
a.display();
b.display();

}
