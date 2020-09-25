import java.util.Scanner;
class Student{

 public static void main(String args[]){

 
 Scanner sc = new Scanner(System.in);

    int rollno[] = new int[5];
    String name[] = new String[5];
    int age[] = new int[5];
    int Score[] = new int[5];
    
    for(int i=0; i<5; i++)
    {
    System.out.println("Enter student record details : rollno,name,age and Score:");
      rollno[i]=sc.nextInt();
      name[i] = sc.next();
      age[i]= sc.nextInt();
      Score[i] = sc.nextInt();
    }

         System.out.println("Score of student bet [0-50] :");  
        for(int i=0; i<5; i++)
        {
         if(Score[i]<=50)
         {
         System.out.println("rollno = "+ rollno[i]); 
         System.out.println("name = "+ name[i]);  
         System.out.println("age = "+ age[i]);  
         System.out.println("Score = "+ Score[i]);  

         }
        }
         System.out.println("Score of student bet [50-65] :");  
        for(int i=0; i<5; i++)
        {
         if(Score[i]>50 && Score[i]<=65)
         {
         System.out.println("rollno = "+ rollno[i]); 
         System.out.println("name = "+ name[i]);  
         System.out.println("age = "+ age[i]);  
         System.out.println("Score = "+ Score[i]);  

         }
        }
        System.out.println("Score of student bet [65-80] :");  
        for(int i=0; i<5; i++)
        {
         if(Score[i]>65 && Score[i]<=80)
         {
         System.out.println("rollno = "+ rollno[i]); 
         System.out.println("name = "+ name[i]);  
         System.out.println("age = "+ age[i]);  
         System.out.println("Score = "+ Score[i]);  

         }
        }
        System.out.println("Score of student bet [80-100] :");  
        for(int i=0; i<5; i++)
        {
         if(Score[i]>80 && Score[i]<=100)
          {
         System.out.println("rollno = "+ rollno[i]); 
         System.out.println("name = "+ name[i]);  
         System.out.println("age = "+ age[i]);  
         System.out.println("Score = "+ Score[i]);  

         }
        }

 
    }

}
