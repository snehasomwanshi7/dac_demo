import java.util.Scanner;

class TwodArray1{

    public static void main(String args[]){

    Scanner sc = new Scanner(System.in);
 
   System.out.println("enter array element :");
   
     int arr[][] = new int[3][3];

    int sum = 0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            arr[i][j] = sc.nextInt();

            sum = sum + arr[i][j];
        }
    }

    System.out.println("array element :");

   for( int i=0; i<3; i++)
   {
       for(int j=0; j<3; j++)
       {
       System.out.print(" "+ arr[i][j]);
       }
       System.out.println(" ");
   }
           System.out.println("sum of element = "+ sum);
 
  }
}