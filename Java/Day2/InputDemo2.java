import java.util.Scanner;
class InputDemo2{
    public static void main(String args[]){
      Scanner sc = new Scanner("123 321");
      int i = sc.nextInt();
      int j = sc.nextInt();
      int k = i+j;
      System.out.println("sum = "+k);
  }
}