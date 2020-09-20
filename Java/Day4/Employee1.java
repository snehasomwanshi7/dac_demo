class Employee1{
	private int empId;
	private String empName;
	void set(int id, String name){
		empId = id;
		empName = name;
	}
	void show(){
		System.out.println(empId+" "+empName);
	}
}
class EmployeeDemo1{
	public static void main(String args[]){
		Employee1 e = new Employee1();
		e.set(101,"ram");
		e.show();
		Employee1 e1 = new Employee1();
		e1.set(102,"shiv");
		e1.show();
	}
}