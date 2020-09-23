class Foo{
      static void m1(){
      System.out.println("Foo m1");
    }
}
class Bar extends Foo{
       static void m1(){
       System.out.println("Bar m1");
    }
}
class MethodHidingDemo{
        public static void main(String args[]){
            Foo.m1();
            Bar.m1();
     }
}