import java.util.Scanner;
class Leap{
	public static void main(String rgc[]){
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter Year =");
		int year=sc.nextInt();

		// System.out.println(" Year =" +year);

		if(year%4==0 && year%100!=0 || year%400==0)
		{
			System.out.println(  "is a leap year =" +year);
		}
		else
		{
			System.out.println(  " is not a leap year =" +year );
		}
	}	
} 