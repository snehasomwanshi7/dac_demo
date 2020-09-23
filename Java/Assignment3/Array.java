class Array{
	public static void main(String args[]){
		int number[] = {2,3,4,6,9};
		int biggest = number[0];
		int smallest = number[0];
		
		for(int i=0; i<number.length; i++)
		{
			if(number[i] > biggest)
				biggest = number[i];
			else if(number[i] < smallest)
				smallest = number[i];
		}
		System.out.println("biggest element =" + biggest);
		System.out.println("smallest element =" + smallest);
	}
}