class Person{

    int age;
    String name;

    Person()
    {
        age=18;
    }
  
   void get(int age, String name)
   {
       this.age = age;
       this.name = name;
   }

    void display()
    {
         System.out.println("age & name = "+ age + " " + name);
 
    }
}

class PersonDemo{

    public static void main(String args[]){

      Person p = new Person();
      p.get(21, "Sneha");
      p.display();
      p.get(23, "Snehal");
      p.display();
    }
}
