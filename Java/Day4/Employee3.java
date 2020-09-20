class Employee3{
	private int empId;
	private String empName;
	void set(int id, String name,int t){
		empId = id;
		empName = name;
	}
	void show(){
		System.out.println(empId+" "+empName);
	}
}
class EmployeeDemo3{
	public static void main(String args[]){
		Employee3 e = new Employee3();
		e.set(101,"ram",1);
		e.show();
	}
}