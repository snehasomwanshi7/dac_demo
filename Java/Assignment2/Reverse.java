import java.util.Scanner;
class Reverse{
	public static void main (String args[]){
		int r=0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number");
		int n = sc.nextInt();
		while(n!=0){
		
			int d = n % 10;
            r = r * 10 + d;
            n =n / 10;
		}
		System.out.println("Reversed number is "+r);
	}
}
