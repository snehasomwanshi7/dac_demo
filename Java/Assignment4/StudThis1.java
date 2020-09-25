class student{

   int rollno;
   String name,course;
   float fee;

   student(int rollno,String name,String course)
   {
       this.rollno= rollno;
       this.name= name;
       this.course = course;
   }

   student(int rollno,String name,String course,float fee)
   {
    this(rollno,name,course); // constructor call 1st nd its reused here
    this.fee= fee;

   }
   void show()
   {
       System.out.println(rollno +" "+name+" "+course+" "+fee);
   }


}

class StudThis1{

public static void main(String args[]){

student s = new student(101,"sneha","Dac");
student s1 = new student(102,"snehal","Dac",50000f);

s.show();
s1.show();

}

}