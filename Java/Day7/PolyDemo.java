class Foo{
       void m1(){
           System.out.println("First m1");
        }
       void m1(int i){
           System.out.println("Second m1");
        }
}
class PolyDemo{
        public static void main(String args[]){
        Foo f = new Foo();
        f.m1();
        f.m1(123);
   }
}