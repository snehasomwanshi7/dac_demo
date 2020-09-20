import java.util.Scanner;
class Radius{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter radius r");
		double r=sc.nextDouble();
		double a = 3.14*r*r;
		double c = 2*3.14*r;
		int c1=(int)c;

		System.out.println("Area ="+a);
		System.out.println("Circumference ="+c1);
	}
} 