class ExpressionC{
	public static void main(String args[]){
		int x = 3;
		int y = 5;
		int z = x++ - --y - --x  +  x++ ;
		System.out.println("Value of x="+x);
		System.out.println("Value of y="+y);
		System.out.println("Value of z="+z);
		
	}
}