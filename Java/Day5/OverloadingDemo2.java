class MathOpe{
	static void sum(int i,float j){
		float k = i + j;
		System.out.println(k);
	}
	static void sum(float i,int j){
		float k = i + j;
		System.out.println(k);
	}
}
class OverloadingDemo2{
	public static void main(String args[]){
		
		MathOpe.sum(12,13.3f);
		MathOpe.sum(12.2f,13);
	}
}