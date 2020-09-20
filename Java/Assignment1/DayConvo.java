import java.util.Scanner;

class DayConvo{
	public static void main(String arg[]){
	   Scanner sc=new Scanner(System.in);
       System.out.println("Enter days");
       int d=sc.nextInt();
	   int year = d/365;
	   int month = d/30;

			System.out.println("no of years= " +year+ " years");
			System.out.println("no of months= " +month+ " Months");
			System.out.println("no of days= " +d+ " Days");
	}
}  