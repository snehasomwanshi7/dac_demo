import java.util.Scanner;
class Eligible{
	public static void main(String argc[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Enter Gender M/F");

		char gender= sc.next().charAt(0);
        
		System.out.println("Enter age");
		int age= sc.nextInt();
		
		System.out.println("age =" +age);
		 
		if(((gender=='m') && (age >=21 ))||((gender=='f') && (age >=18 )))
		{
			System.out.println("Eligible for marriage");
		}
		else
		{
			System.out.println(" NOt Eligible for marriage");
		}


	}
} 