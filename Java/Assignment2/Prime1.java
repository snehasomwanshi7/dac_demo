class Prime1{
	public static void main(String args[]){
	int a=10;
	int b=50;
	while(a<b){
		boolean flag = false;
	for(int i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			flag = true;
			break;
		}
	}
	if(a!=0 && a!=1 && !flag)
	{
		System.out.println(a);
		++a;
	}
	}
}
}