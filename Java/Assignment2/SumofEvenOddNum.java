class SumofEvenOddNum
{
	public static void main(String args[])
	{
		int arr[] = {10,13,12,14,3,2};
		int sum=0 , sumOdd=0;
		for(int i=0; i<arr.length; i++)
		{
			if(arr[i]%2==0)
			{
				sum = sum+arr[i];
			}
			else
			{
				sumOdd = sumOdd + arr[i];
			}
		}
		System.out.println("Sum of even number : "+sum);
		System.out.println("Sum of odd number : "+sumOdd);
	}
}
		
		