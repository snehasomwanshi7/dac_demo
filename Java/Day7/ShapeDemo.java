import java.util.Scanner;
abstract class shape{
       float ar;
       abstract void area();
       void show(){
           System.out.println("Area =" +ar);
     }
}
class Rectangle extends shape{
       void area(){
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter len");
       float len = sc.nextFloat();
       System.out.println("Enter br");
       float br = sc.nextFloat();
       ar = len*br;
   }
}
class ShapeDemo{
      public static void main(String args[]){
         shape r = new Rectangle();
           r.area();
           r.show();
    }
}