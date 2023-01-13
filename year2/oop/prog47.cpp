#include <iostream>
using namespace std;
class Person{
public:
Person(){
cout << "Constructor of Person\n";
}
void display(){
cout<<"disp function of Person\n";
}
~Person(){
cout<<"destructor of person\n";
}
};

class Employee : public virtual Person{
};

class Student : public virtual Person{

};

class Manager : public Employee, public Student {
};

int main(){
Manager obj;
obj.display();
return 0; 
}
