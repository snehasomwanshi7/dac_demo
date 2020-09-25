class Demo{
    Demo()
    {
        //this(5,6);
        System.out.println("first constructor call..");
    }
   Demo(int i, int j)
   {
       this();
       int sum = i + j;
    System.out.println("sum ="+ sum);

   }

}

class Example extends Demo{

     Example()
     {
         this(2,3);
      System.out.println("baseclass constructor call..");
    }
   Example(int i, int j)
   {
       super(5,6); // if you not declare bydefault it is call on compiler
       int mul = i * j;
    System.out.println("mul ="+ mul);

   }

}

class demoex{

    public static void main(String args[]){
    
    Example e = new Example();

    }
}
