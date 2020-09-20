import java.util.Scanner;
class Swapping{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Before Swapping");
		System.out.println("Enter first element");
		int x=sc.nextInt();

		System.out.println("Enter second element");
		int y=sc.nextInt();

		System.out.println(" first element x=" +x);
		System.out.println("second element y=" +y);
		System.out.println("After swapping");
		int X = x+y;
		y = X-y;
		x = X-y;
        
		System.out.println(" first element x=" +x);
		System.out.println(" second element y=" +y);

	}
} 