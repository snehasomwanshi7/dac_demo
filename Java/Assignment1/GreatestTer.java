import java.util.Scanner;
class GreatestTer{
	static public void main(String argc[]){
    Scanner sc=new Scanner(System.in);
	
		System.out.println("Eneter First element :");
		int a=sc.nextInt();
		System.out.println("First element ::" +a);

		System.out.println("Eneter second element ::");
		int b=sc.nextInt();
		System.out.println("Second element ::" +b);

		System.out.println("Eneter Third element ::");
		int c=sc.nextInt();
		System.out.println("Third element ::" +c);

	    int max =(a>b)?(a>c ? a : b ):(b>c ? b : c );

        System.out.println("Greatest number =" +max);
	}
} 