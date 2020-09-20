class SearchArrayElement
{
	public static void main(String args[])
	{
		int arr[] = {10,20,30,40,50,56};
		int num=56;
		boolean found = false;
		
		for(int x : arr)
		{
			if(x==num)
			{
			   found = true;
			  // System.out.println(num+ " is found.");
			   break;
			}
		}
		if(found)
            System.out.println(num+ " is found.");
        else
            System.out.println(num+ " is not found.");
	}
}