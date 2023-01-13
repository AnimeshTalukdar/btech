#include <iostream>
using namespace std;
class INT
{
int i;

public:
INT(int a) : i(a)
{
i = a;
}
INT operator++(int)
{
INT temp(*this);
i = i + 1;
return temp;
}
int operator++()
{
i = i + 1;
return i;
}
operator int()
{
return i;
}
~INT() {}
void print()
{
cout << i;
}
};
int main()
{
int x = 3;
INT y = x;
y++ = ++y;
x = y;
return 0;
}
