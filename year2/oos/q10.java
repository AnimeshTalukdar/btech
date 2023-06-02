import java.lang.Math;
import java.util.HashMap;
class Student{
    String name;
    int roll_no;
    String subject_name[] = {"Phy","che","bio","math","eng"};
    Student(String name,int roll_no){
        this.name = name;
        this.roll_no = roll_no;
    }
    Student(){
        this.name = "";
        this.roll_no =(int) Math.random()*100; 
    }
    int get_roll_no(){
        return roll_no;
    }
    String get_name(){
        return this.name;
    }
}

class TabulationSheet{
    String subject_name;
    HashMap<Integer,Integer> marks;
    TabulationSheet(String subject_name){
        this.subject_name = subject_name;
        marks = new HashMap<Integer,Integer>();
    }
    void insert_marks(int roll_no,int marks){
        this.marks.put(roll_no, marks);
    }

    int get_marks(int roll_no){
        return this.marks.get(roll_no);
    }
    String get_subject_name(){
        return this.subject_name;
    }
}

class Marksheet{
    int roll_no = 0;
    Student[] students = new Student[1000] ;
    TabulationSheet [] tabulationsheet= new TabulationSheet[5];
    Marksheet(){
        for(int i = 0;i<5;i++){
            tabulationsheet[i]= new TabulationSheet("");
        }
    }
    int add_student(String name,int [] marks){
        students[roll_no] = new Student(name,roll_no+1);
        for(int i = 0;i<5;i++){
            tabulationsheet[i].insert_marks(roll_no+1,marks[i]);
        }
        return ++roll_no;
    }
    void print(int roll_no){
        System.out.println("Name: " + students[roll_no-1].name);
        System.out.println("Roll NO: " + roll_no);
        System.out.println("Subject     Marks");
        for(int i = 0 ;i<5;i++){
            System.out.println("Subject"+(i+1)+" "+tabulationsheet[i].get_marks(roll_no));
        }
    }
}
public class q10{
    public static void main(String []args){

        Marksheet mr = new Marksheet(); 
        int [] mks ={1,2,3,4,5}; 
        mr.add_student("A",mks);
        mr.add_student("B",mks);
        mr.add_student("C",mks);
        mr.print(1);
        mr.print(2);
        mr.print(3);
    }

}

