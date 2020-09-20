import java.util.Scanner;
class CmdArg{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter your name");
		String nm = sc.next();
		System.out.println("Welcome "+nm);
	}
}