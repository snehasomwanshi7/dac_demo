import java.util.Scanner;

class ExpressionB{
	public static void main(String args[]){
	Scanner sc = new Scanner (System.in);
	System.out.println("Enter value of x");
	int i = sc.nextInt();
	System.out.println("Value of X = "+i);
	int y = (i++) + (++i);

	System.out.println("Value of Y = "+y);
    }
}