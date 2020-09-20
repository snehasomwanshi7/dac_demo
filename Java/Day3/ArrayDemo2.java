import java.util.Scanner;
class ArrayDemo2{
       public static void main(String args[]){
       Scanner sc = new Scanner(System.in);
       int ar[] = new int[5];
       for(int i=0;i<ar.length;i++){
             System.out.println("Enter ele");
             ar[i] = sc.nextInt();
           }
              for(int a : ar){
                     System.out.println(a);
             }
       }
   }