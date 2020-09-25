import java.util.Scanner;

class MathOpe{

static int add(int a, int b){

    return a+b;
}
static int subtract(int a, int b){

return a-b;

}
static int multiply(int a, int b){

  return a*b;
}
static double power(double x, double y){

return Math.pow(x,y);

}
}

class Demo{

    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);

   System.out.println("enetr value of a & b");
   
   int a = sc.nextInt();
   int b = sc.nextInt();

   int ans = MathOpe.add(a,b);
   System.out.println("sum = "+ ans);
    int ans1 = MathOpe.subtract(a,b);
   System.out.println("subtract = "+ ans1);
       int ans2 = MathOpe.multiply(a,b);
   System.out.println("multiplication = "+ ans2);

   System.out.println("enetr value of x & y");
   double x = sc.nextDouble();
   double y = sc.nextDouble();

    double ans3 = MathOpe.power(x,y);
   System.out.println("power = "+ ans3);

   }
}
