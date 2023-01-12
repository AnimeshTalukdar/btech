#include<iostream>
using namespace std;

class Grade_card
{
string dept;
string name;
int roll;
int sem;
double marks[5];
double cgpa;
public:
Grade_card(string dept,string name, int roll, int sem)
{
this->dept=dept;
this->name=name;
this->roll=roll;
this->sem=sem;
for(int i=0;i<5;i++)
{this->marks[i]=marks[i];}
}
void calculate_CGPA()
{
int sum=0;
for(int i=0;i<5;i++)
{
sum=sum+marks[i];
}
cgpa=sum/50;
}
void assignRandomMarks()
{
for(int i=0;i<5;i++)
{
marks[i]=rand()%100;
}
}
double getcgpa()
{
return cgpa;
}
void getDetails()
{
cout<<"Name of dept : "<<dept<<endl;
cout<<"name"<<name<<endl;
cout<<"roll"<<roll<<endl;
cout<<"semister"<<sem<<endl;
cout<<"cgpa"<<cgpa<<endl;
}
};
int main()
{
string dept[]={"ce","it","mech","elec","prin"};
string defname="Student";
int defroll=1;
Grade_card* arr[60];
for(int i=0;i<60;i++)
{
arr[i]=new Grade_card(dept[(int)rand()%5],defname+ to_string(defroll),defroll++,(int)rand()%8);
arr[i]->assignRandomMarks();
arr[i]->calculate_CGPA();
}
int max=0;
for(int i=0;i<60;i++)
{
if(arr[i]->getcgpa()>arr[max]->getcgpa())
max=i;
}
cout<<"MAX CGPA"<<endl;
arr[max]->getDetails();
return 0;
}