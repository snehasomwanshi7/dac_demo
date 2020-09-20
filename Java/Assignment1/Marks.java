import java.util.Scanner;
class Marks{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter first subject mark ");
		int a=sc.nextInt();

		System.out.println("Enter second subject mark ");
		int b=sc.nextInt();

		System.out.println("Enter third subject mark ");
		int c=sc.nextInt();

		System.out.println("Enter fourth subject mark ");
		int d=sc.nextInt();

		System.out.println("Enter fifth subject mark ");
		int e=sc.nextInt();

		int sum=a+b+c+d+e;


		double p=(sum/5.0);
		
		System.out.println("percentage =" +p+ "%");
	}
} 