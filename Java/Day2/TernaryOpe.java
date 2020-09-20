class TernaryOpe{
    public static void main(String args[]){
        int i = 12;
        String s = (i%2==0) ? i+" is even" : i + "is odd";
        System.out.println(s);
        boolean b = (i%2==0) ? true : false;
        System.out.println(b);
   }
}