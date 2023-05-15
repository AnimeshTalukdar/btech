#include<iostream>

using namespace std;

class Employee{
string name;
double salary;

public:

Employee(string n ="", double s = 0.0)
{
name = n;
salary =s;
}

string getName()
{
return name;
}

double getSalary()
{
return salary;
}

void setName(string n)
{
name = n;
}

void setSalary(double s)
{
salary = s;
}

virtual void printDetails()
{
cout<<"Name: "<<name<<endl;
cout<<"Salary : "<<salary<<endl;
}

};

class Manager : public Employee
{
string type;

public:

Manager(string name, double salary, string t="") : Employee(name,salary)
{
type = t;
}

void printDetails()
{
Employee :: printDetails();
cout<<"TYPE : "<<type<<endl;
}
};

class Clerk : public Employee
{
double allowance;

public:

Clerk(string name, double salary, double a = 0.0) : Employee(name,salary)
{
allowance = a;
}

void printDetails()
{
Employee :: printDetails();
cout<<"Allowance : "<<allowance<<endl;
}

};

int main()
{
Manager ob1("Manager",49000.00,"Merkating");
Clerk ob2("Person5",20000.00,1200.00);
ob1.printDetails();
ob2.printDetails();

Employee *arr[6];
arr[0] = new Employee("Person1", rand()%10000);
arr[1] = new Employee("Person2", rand()%10000);
arr[2] = new Manager("Person3",rand()%10000,"Merkating");
arr[3] = new Manager("Person4",rand()%45000,"Seales");
arr[4] = new Clerk("Person5",rand()%20000,1200.00);
arr[5] = new Clerk("Person6",20000.00,1000.00);

cout<<"\nDetails of all employee\n\n";

for(int i ; i<6;i++)
{
arr[i]->printDetails();
cout<<endl;
}

return 0;
}