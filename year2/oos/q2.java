import java.io.*;
import java.util.*;
class student{
String name;
int marks1,marks2,marks3;
student(String name,int marks1,int marks2,int marks3)
{
this.name=name;
this.marks1=marks1;
this.marks2=marks2;
this.marks3=marks3;
}
void assign(String name,int marks1,int marks2,int marks3)
{ 
this.marks1=marks1;
this.marks2=marks2;
this.marks3=marks3;
this.name = name;
}
double avg()
{
return (marks1+marks2+marks3)/3.0;
}
void display()
{
System.out.println("Name:"+name+"\n"+"TotalMarks:"+(marks1+marks2+marks3));
}
public static void main(String args[]) { 
//System.out.println(args[0]); 
String name = "ABC";
int marks1=98,marks2=58,marks3=88; 
student ob = new student(name,marks1,marks2,marks3); 
ob.display(); 
System.out.println("Average Marks: "+ ob.avg());
}
}
