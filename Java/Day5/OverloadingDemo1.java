class MathOpe{
            static void sum(int i,int j){
                 int k = i +j;
                 System.out.println(k);
          }
             static void sum(float i,float j){
                 float k = i + j;
                 System.out.println(k);
         }
 }
class OverloadingDemo1{
            public static void main(String args[]){
                MathOpe.sum(12,13);
                MathOpe.sum(12.2f,13.3f);
        }
}