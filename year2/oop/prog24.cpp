#include<iostream>
using namespace std;
class A {
mutable int a;
public:
void disp() const {
cout << "Variable cannot be changed here";
a=2;
cout<<"Except a="<<a<<endl;
}
};
int main()
{ 
A ob;
ob.disp();
return 0;
}