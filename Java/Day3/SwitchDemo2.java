import java.util.Scanner;
class SwitchDemo2{
     public static void main(String args[]){
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter any Character");
       char ch = sc.next().charAt(0);
       switch(ch){
       case 'a' :
       case 'e' :
       case 'i' :
       case 'o' :
       case 'u' :
                 System.out.println(ch+" is a vowel");
                 break;
       default : 
                 System.out.println("not a vowel");
        }
    }
}