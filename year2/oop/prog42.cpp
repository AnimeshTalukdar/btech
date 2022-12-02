class Employee 
{
string name;
double salary;
public:
Employee (string n="", double s=0)
{
name =n;
salary = s;
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
slary = s;
}

virtual void printDetails()
{
cout<<"Name:"<<name;
cout<<"Salary:"<<salary;
}

