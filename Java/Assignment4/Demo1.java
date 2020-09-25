class MathOpe{

 static void multiply(int a, int b)
{

    int mul = a + b;
    System.out.println("multiplication = "+ mul);
}

static void multiply(float a, float b, float c)
{
    
    float mul = a * b * c;
    System.out.println("multiplication = "+ mul);

}
static void multiply(int arr[])
{
    int mul = 1;

    for( int e : arr)
    {
         mul = mul * e;
    }
     System.out.println("multiplication = "+ mul);

}
static void multiply(double a, int b)
{

    double mul = a * b;
  System.out.println("multiplication = "+ mul);

}
}
class Demo1{

    public static void main(String args[]){

      MathOpe.multiply(5, 6);
      MathOpe.multiply(5.6f, 6.7f, 0.8f);
       int array[] = {4, 5, 6, 7, 8};
      MathOpe.multiply(array);
      MathOpe.multiply(10.5, 6);
    }
}