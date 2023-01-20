#include<iostream>
using namespace std;

class Integer
{
int i;
public:
Integer ( int i=0)
{         
this->i = i;       
}
void operator = (const int& other)
{
i=other;
}
          
}; 


class Index
{
int i;
public:
Index(int i=0)
{
this->i=i;
}

operator int()
{
return i;
}

friend Index operator + ( const Index & me,const Index & other)
{
Index sum;
sum.i=me.i+other.i;
return sum;
}

void operator = (const int& other)
{
i=other;
}


};



int main()
{
Index in(4), out(10);
int x= in;
int y= in+out;
in = 2;
Integer i;
i=in;
return 0;
}
