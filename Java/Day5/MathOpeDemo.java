class MathOpe{
         static int sum(int i,int j){
           return i+j;
       }
         static void show(int res){
               System.out.println(res);
        }
}
class MathOpeDemo{
      public static void main(String args[]){
             int s = MathOpe.sum(12,13);
             MathOpe.show(s);
         }
}