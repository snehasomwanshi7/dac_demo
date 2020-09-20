import java.util.Scanner;
class Salary{
	static public void main(String argc[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Enter Salary : ");
		double sal = sc.nextInt();

	if(sal < 10000)
	{
		double HRA = 0.10*sal;
		double DA = 0.90*sal;
		double gs = sal+HRA+DA;
		System.out.println("GS :: " +gs);
	}
	else 
	{
		double HRA = 2000;
		double DA = 0.98*sal;
		double gs = sal+HRA+DA;
		System.out.println("GS :: " +gs);
	}
	}
} 