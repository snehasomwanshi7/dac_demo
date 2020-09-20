import java.util.Scanner;
class SumAvg{
	public static void main(String args[]){
		int sum=0;
		Scanner sc = new Scanner(System.in);
		int arr[]=new int[10];
		for(int i=0;i<arr.length;i++)
			
			{
				
				System.out.println("enter the number");
				arr[i]=sc.nextInt();
			}
		for(int i=0;i<arr.length;i++)
			
			{
				
				sum=sum+arr[i];
			}	
		System.out.println("sum is "+sum);	
		int avg=sum/10;
		System.out.println("Average is "+avg);
	}
}	
		