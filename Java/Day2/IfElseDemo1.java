import java.util.Scanner;
class IfElseDemo1{
   public static void main(String args[]){
     Scanner sc = new Scanner (System.in);
     System.out.println("Enter any 0 or 1");
     int num = sc.nextInt();
       if(num == 0 || num ==1){
           System.out.println("Good Boy");
          }else{
           System.out.println("try again");
        }
   }
}