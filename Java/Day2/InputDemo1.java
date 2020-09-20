import java.util.Scanner;
class InputDemo1{
    public static void main(String arga[]){
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter a number");
       int i = sc.nextInt();
       System.out.println("Enter another number");
       int j = sc.nextInt();
       int k = i+j;
       System.out.println("sum = "+k);
  }
}