class Employee1{
      private int empId;
      private String empName;
      void set(int empId,String empName){
          this.empId = empId;
          this.empName = empName;
      }
       void show(){
                   System.out.println(empId+" "+empName);
                }
}
          class EmployeeDemo1{
              public static void main(String args[]){
              Employee1 e = new Employee1();
              System.out.println("e =" +e);
              e.set(101,"ram");
              e.show();
              Employee1 e1 = new Employee1();
              System.out.println("e1 =" +e1);
              e1.set(102,"shiv");
              e1.show();
      }
}