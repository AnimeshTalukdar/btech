import java.util.*;



class Employee{
String name;
int id;
String address;
double salary;

Employee(String name,int id,String address,double salary){
this.name = name;
this.id = id;
this.address = address;
this.salary = salary;
}
String getname(){return name;}
int getid() {return id;}
String getaddress(){return address;}
double getsalary(){return salary;}

void setname(String name){this.name=name;}
void setid(int id ) {this.id=id;}
void setaddress(String address){this.address=address;}
void setsalary(double salary) { this.salary=salary;}

}

class Dept{
String name;
String location;
Employee[] employees;
int base_id;
int next_id;

Dept(String name,String location){
this.name = name;
this.location = location;
employees = new Employee[100];
base_id = 32974;
next_id=base_id;
}

int add(String name,String address,double salary){
if(next_id-base_id>=100)
return -1;
employees[next_id-base_id]=new Employee(name,next_id,address,salary);
next_id +=1;
return next_id-1;
}


int remove(int id){
if (id-base_id<next_id && id-base_id>=0){
employees[id-base_id]=null;
return 1;
}
return 0;
}

double getExpenditure(){
double expenditure=0;
for(int i = 0;i<next_id-base_id;i+=1){
if(employees[i]!=null)
expenditure +=employees[i].getsalary();
}
return expenditure;
}

public static void main(String [] args){
Dept information_technology = new Dept("Information Technology","Kolkata");
information_technology.add("a","Ah",200);
information_technology.add("b","Bh",300);
information_technology.add("c","Ch",400);

System.out.println(information_technology.name+" Expenditure:"+information_technology.getExpenditure());

}
}
