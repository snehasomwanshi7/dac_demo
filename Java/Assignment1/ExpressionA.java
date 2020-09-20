import java.util.Scanner;

class ExpressionA{
	public static void main(String args[]){
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter value of x");
	int i = sc.nextInt();
	int y = (i*i ) + (3*i) - 7;
	 System.out.println("y = "+y);
     }
}