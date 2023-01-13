#include<iostream>
using namespace std;
class student{
char name[10];
int roll;
public:
void getdata(){
cout<<"Enter the name: ";
cin>>name;
cout<<"Enter the roll number: ";
cin>>roll;
}
void showdata(){ 
cout<<"Name: "<<name<<"  Roll No: "<<roll<<endl;

}
virtual void dept()=0;
};

class engineering: public student{
char dep[10];
public:
void dept(){
getdata();
cout<<"Enter the department: ";
cin>>dep;
}
void showdata(){
student::showdata();
cout<<"  "<<"Department: "<<dep;
}
};
class medicine: public student{
char dep[10];
public:
void dept(){
getdata();
cout<<"Enter the department: ";
cin>>dep;
}
void showdata(){
student::showdata();
cout<<"  Department: "<<dep;
}
};
class science: public student{
char dep[10];
public:
void dept(){
getdata();
cout<<"Enter the department: ";
cin>>dep;
}
void showdata(){
student::showdata();
cout<<"  Department: "<<dep;
}
};
int main(){
student *baseptr;
engineering e; medicine m; science s;
cout<<"Engineering student"<<endl;
baseptr = &e; 
baseptr->dept(); 
cout<<endl;
cout<<"Details"<<endl;
baseptr->showdata();
cout<<endl;
cout<<"Medicine student"<<endl;
baseptr = &m; 
baseptr->dept(); 
cout<<endl;
cout<<"Details"<<endl;
baseptr->showdata();
cout<<endl;
cout<<"Science Student"<<endl;
baseptr = &s; 
baseptr->dept(); 

cout<<endl;
cout<<"Details"<<endl;
baseptr->showdata();
return 0;
}
