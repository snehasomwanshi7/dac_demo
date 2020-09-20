import java.util.Scanner;
class Table{
	public static void main(String args[]){
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter a number");
	int a = sc.nextInt();
	for(int i=1;i<=10;i++)
	{
		int x=i*a;
			System.out.println(x);
	}
	}
}