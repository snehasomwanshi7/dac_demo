import java.util.Scanner;
class SimpleInterest{
	public static void main(String args[]){
	    Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter Principal p");
		float p=sc.nextFloat();

		System.out.println("Enter rate r");
		float r=sc.nextFloat();

		System.out.println("Enter time t");
		float t=sc.nextFloat();

		float s=p*r*t/100;
		System.out.println("simple interest="+s);
		
	}
}