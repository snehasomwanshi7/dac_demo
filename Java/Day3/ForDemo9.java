class ForDemo9{
     public static void main(String args[]){
        
      outer:
        for(int i=1;i<=5;i++){
           abc:
              for(int j=1;j<=5;j++){
                   System.out.print(" "+j);
                   if(j==3)
                       break abc;
                     }
                       System.out.println("");
               }
                 System.out.println("okk");
            }
    }