public class q13{
    public static void main(String [] args){
        Student s = new Student();
        s.setAge(20);
        s.setWeight(60);
        s.setHeight(5.5);
        s.setAddress("Kolkata");
        s.setDateOfBirth("22/12/2002");
        s.setRoll(1);
        String [] listOfSubjects = {"math", "phy", "che"};
        s.setListOfSubjects(listOfSubjects);
        double [] marks = {90, 80, 70};
        s.setMarks(marks);
        s.calculateGrade();
        System.out.println("Age: " + s.getAge());
        System.out.println("Weight: " + s.getWeight());
        System.out.println("Height: " + s.getHeight());
        System.out.println("Address: " + s.getAddress());
        System.out.println("Date of Birth: " + s.getDateOfBirth());
        System.out.println("Roll: " + s.getRoll());
        System.out.println("List of Subjects: ");
        for(int i = 0; i < s.getListOfSubjects().length; i++){
            System.out.println(s.getListOfSubjects()[i]);
        }
        System.out.println("Marks: ");
        for(int i = 0; i < s.getMarks().length; i++){
            System.out.println(s.getMarks()[i]);
        }
        System.out.println("Grade: " + s.grade);
        
    }
}


class Person{
    int age;
    double weight;
    double height;
    String address;
    String dateOfBirth;

    void setAge(int age){
        this.age = age;
    }
    void setWeight(double weight){
        this.weight = weight;
    }
    void setHeight(double height){
        this.height = height;
    }
    void setAddress(String address){
        this.address = address;
    }
    void setDateOfBirth(String dateOfBirth){
        this.dateOfBirth = dateOfBirth;
    }
    int getAge(){
        return this.age;
    }
    double getWeight(){
        return this.weight;
    }
    double getHeight(){
        return this.height;
    }
    String getAddress(){
        return this.address;
    }
    String getDateOfBirth(){
        return this.dateOfBirth;
    }

}
class Employee extends Person{
    double salary;
    String dateOfJoining;
    double experience;
    void setSalary(double salary){
        this.salary = salary;
    }
    void setDateOfJoining(String dateOfJoining){
        this.dateOfJoining = dateOfJoining;
    }
    void setExperience(double experience){
        this.experience = experience;
    }
    double getSalary(){
        return this.salary;
    }
    String getDateOfJoining(){
        return this.dateOfJoining;
    }
    double getExperience(){
        return this.experience;
    }

}
class Student extends Person{
    int roll;
    String[] listOfSubjects;
    double [] marks;
    String grade = "";
    void calculateGrade(){
        double sum = 0;
        for(int i = 0; i < marks.length; i++){
            sum += marks[i];
        }
        double avg = sum/marks.length;
        if(avg >= 90){
            grade = "S";
        }
        else if(avg >= 80){
            grade = "A";
        }
        else if(avg >= 70){
            grade = "B";
        }
        else if(avg >= 60){
            grade = "C";
        }
        else if(avg >= 50){
            grade = "D";
        }
        else if(avg >= 40){
            grade = "E";
        }
        else{
            grade = "F";
        }
    }
    void setRoll(int roll){
        this.roll = roll;
    }
    void setListOfSubjects(String [] listOfSubjects){
        this.listOfSubjects = listOfSubjects;
    }
    void setMarks(double [] marks){
        this.marks = marks;
    }
    int getRoll(){
        return this.roll;
    }
    String [] getListOfSubjects(){
        return this.listOfSubjects;
    }
    double [] getMarks(){
        return this.marks;
    }


}
class Technician extends Employee{

    
}
class Professor extends Employee{
    String [] courses;
    String [] listOfAdvisee;
    void setCourses(String [] courses){
        this.courses = courses;
    }
    void setListOfAdvisee(String [] listOfAdvisee){
        this.listOfAdvisee = listOfAdvisee;
    }
    String [] getCourses(){
        return this.courses;
    }
    String [] getListOfAdvisee(){
        return this.listOfAdvisee;
    }
}
