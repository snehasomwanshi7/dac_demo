class ArrayDemo{
       public static void main(String args[]){
          int a[] = {1,2,3};
          int b[] = {1,2,3,44,55};
          int c[] = {1,2,3};
          int arr[][]=new int[3][];
          arr[0] = a;
          arr[1] = b;
          arr[2] = c;
          for(int ar[] : arr){
               for(int e : ar){
                     System.out.print(" " +e);
                    }
               System.out.println(" ");
           }
       }
}