//not completed

class Student{

String name;
int roll_no;
String[] subjects;

Student(String name,int roll_no,String [] subjects){
this.name = name;
this.roll_no = roll_no;
this.subjects= subjects;

}

String getname(){
return name;
}


void setname(String name){
this.name = name;
}

int getroll(){
return roll_no;
}

void setroll(int roll_no){
this.roll_no = roll_no;
}

String[] getsubjects(){
return subjects;
}

void setsubjects(String[] subjects){
this.subjects= subjects;
}




}


