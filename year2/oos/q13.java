class q13{
    public static void main(String [] args){
        
    }
}


class Person{
    int age;
    double weight;
    double height;
    String address;
}
class Employee extends Person{
    double salary;
    String dateOfJoining;
    double experience;
}
class Student extends Person{
    int roll;
    String[] listOfSubjects;
    double [] marks;
    void calculateGrade();
}
class Technician extends Employee{
    
}
class Professor extends Employee{
    String [] courses;
    String [] listOfAdvisee;
}
