class Student{

        int rollno;
        String name;

        static int count =0;

        void setData(int r , String n)
        {
            rollno = r;
            name = n;
        }

        void showData()
            {
                System.out.println(rollno + " " + name);
                count++;
            System.out.println("no of stud object ="+count);
            }

}

class StudentDemo1{
        public static void main(String args[]){
        
        Student s = new Student();

        s.setData(101,"riya");
        s.showData();
        s.setData(102,"shilpa");
        s.showData();
        }
}

