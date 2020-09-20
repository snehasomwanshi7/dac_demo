import java.util.Scanner;
class ArrayDemo1{
      public static void main(String args[]){
       Scanner sc = new Scanner(System.in);
       int ar[] = new int[3];
       for(int i=0;i<ar.length;i++){
           System.out.println("Enter an element");
           ar[i] = sc.nextInt();
            }
               for(int i=0;i<ar.length;i++){
                    System.out.println(ar[i]);
               }
       }
}