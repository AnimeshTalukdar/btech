#include<iostream>
using namespace std;
class Person 
{
string name;
int age;
double height;
public:
Person(string n,int a,double h)
{
name = n;
age = a;
height = h;
}
Person()
{
name = "";
age = 0;
height =0.0;
}

string getName()
{
return name;
}

int getAge()
{
return age;
}

double getHeight ()
{
return height;
}


void setName(string s)
{
name =s;
}

void setAge(int a)
{
age=a;
}

void setHeight(double h)
{
height = h;
}

virtual void printDetails() { 
cout<<"Name:"<<name<<endl; 
cout<<"Age:"<<age<<endl;
cout<<"Height:"<<height<<endl;
}

};

class Student : public Person
{
int roll,yoa;
public:
Student (string n,int a,double h,int r,int y):Person(n,a,h)
{
roll=r;
yoa =y;
}
int getRoll()
{
return roll;
}
int getYear()
{
return yoa;
}

void printDetails()
{
 Person::printDetails();

cout<<"Roll:"<<roll<<endl;
cout<<"Year of admissoin:"<<yoa<<endl;
}

};


int main() { 
cout<<"Details of persons:"<<endl;
Person *a[4];
a[0]=new Person("Abhisek",31 ,167 );
a[1]=new Person("Samir",32 ,145 );
a[2]=new Student("Souvik",20,155 ,149 ,2021);
a[3]=new Student("Sharuk",21,163 , 144,2020);
for(int i=0;i<4;i++)
{
a[i]->printDetails();
cout<<endl;
}
return 0;
}
