#include<iostream>
using namespace std;
class Integer
{
int x;
public:
Integer (int a=0) : x(a)
{
x = a;
}
Integer operator+ (Integer i)
{
Integer sum;
sum.x = x + i.x;
return sum;
}
Integer operator++(int)
{
Integer temp(*this);
x = x+1;
return temp;
}
operator int()
{
return x;
}
friend ostream& operator<<(ostream &os, Integer p);
};
ostream& operator<<(ostream &os, Integer p)
{
os<<p.x<<endl;
return os;
}
int main() {
Integer a = 4, b = a, c;
c = a+b++;
int i = a;
cout << a << b << c;
return 0;
}
