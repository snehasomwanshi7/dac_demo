import java.util.Scanner;
class Prime{
	public static void main(String args[]){
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter a number");
	int a = sc.nextInt();
	for(int i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			
			System.out.println("Number is not prime");
			break;
		}
		
	}
	System.out.println("Number is prime"); 
	}
}