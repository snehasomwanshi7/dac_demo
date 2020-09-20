import java.util.Scanner;
class GreatestIf{
	public static void main(String argc[]){
		
        Scanner sc=new Scanner(System.in);
		System.out.println("Enter three numbers");
		
		int x = sc.nextInt();
		System.out.println("X =" +x);
		
		int y = sc.nextInt();
		System.out.println("y =" +y);
		
		int z = sc.nextInt();
		System.out.println("z =" +z);

		if(x > y && x > z)
		{
			System.out.println("X is greater=" +x);
		}
		else if(y > x && y > z)
		{
			System.out.println("y is greater=" +y);
		}
		else
		{
			System.out.println("z is greater=" +z);
		}
	}
} 