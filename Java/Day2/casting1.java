class casting1{
    public static void main(String args[]){
       byte b = 12;
       char c = 'A';
       int i = 148;    //up casting
       System.out.println(i);
       //int j = i;
       int d = c;
       byte b1 = (byte)i;   //down casting
       System.out.println(d);
}
}