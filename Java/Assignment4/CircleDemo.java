 import java.util.Scanner;

class Circle{

    int r;
    double area;
    float pi = 3.14F;

void init()
{
    System.out.println("Enter radius of circle ");
   
}
void calculateArea()
{ 
   Scanner sc = new Scanner(System.in);
   int r = sc.nextInt();
  area = pi * r * r;

}
void display()
{
    System.out.println("Area of circle = "+ area);
}
}
class CircleDemo{
  public static void main(String args[]){

 Circle c = new Circle();

 c.init();
 c.calculateArea();
 c.display();

  }

}