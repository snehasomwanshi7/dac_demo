class ExpressionD{
	public static void main(String args[]){
		boolean x = true;
		boolean y = false;
		boolean z = x && y || !(x || y);
		System.out.println("Value of z="+z);
		
	}
}