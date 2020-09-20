import java.util.Scanner;
    class SwitchDemo{
      public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any day no");
        byte dayNo = sc.nextByte();
        switch(dayNo){
           case 1:
                 System.out.println("mon");
                   break;
           case 2:
                 System.out.println("tues");
                   break;
           case 3:
                 System.out.println("wed");
                   break;
           case 4:
                 System.out.println("thur");
                   break;
           case 5:
                 System.out.println("fri");
                   break;
           case 6:
                 System.out.println("sat");
                   break;
           case 7:
                 System.out.println("sun");
                   break;
           default:
                 System.out.println("not a day");
           }
       }
 }