import java.util.Scanner;
class ArrayDecendingOrder
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int arr[] = new int[5];
		for(int i=0; i<arr.length; i++)
		{
			System.out.println("Enter the number");
			arr[i] = sc.nextInt();
		}
		
		for(int j=0; j<arr.length; j++)
		{
			for(int k=j+1; k<arr.length; k++)
			{
				if(arr[j] < arr[k])
				{
					int temp = arr[j];
					arr[j] = arr[k];
					arr[k] = temp;
				}
			}
		}
		
		System.out.println("Decending order : ");
		for(int j=0; j<arr.length; j++)
		{
			System.out.println(arr[j]+" ");
		}
	
	}
}
		