class ArrayDemo3{
      public static void main(String args[]){
          int arr1[][]=new int[2][];
          int arr2[][]=new int[2][3];

        for(int ar[] : arr1){
              System.out.print(" " +ar);
           }
              System.out.println(" ===== ");
                for(int ar[] : arr1){
                    System.out.print(" " +ar);
                }
                       System.out.println(" ====== ");
        }
}