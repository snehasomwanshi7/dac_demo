import java.util.Scanner;
class WhileDemo{
     public static void main(String args[]){
         Scanner sc = new Scanner(System.in);     
         System.out.println("Enter any num");
         int n = sc.nextInt();
         while(n<10){
               System.out.println(n);
                 n++;
         }
      }
 }