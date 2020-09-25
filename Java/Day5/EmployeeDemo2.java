class Employee2{
     private int empId;
     private String empName;
         void set(int empId,String empName){
         System.out.println("this=" +this);
         this.empId = empId;
         this.empName = empName;
}
          void show(){
             System.out.println(empId+" "+empName);
    }
}
class EmployeeDemo2{
      public static void main(String args[]){
         Employee2 e = new Employee2();
         System.out.println("e =" +e);
          e.set(101,"ram");
          e.show();
         Employee2 e1 = new Employee2();
         System.out.println("e1 =" +e1);
          e1.set(102,"shiv");
          e1.show();
 }
}