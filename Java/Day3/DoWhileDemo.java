import java.util.Scanner;
class DoWhileDemo{
      public static void main(String args[]){
         Scanner sc = new Scanner(System.in);
         System.out.println("Enter any num");
         int n = sc.nextInt();
         do{
              System.out.println(n);
              n++;
           }
         while(n<10);
        }
  }