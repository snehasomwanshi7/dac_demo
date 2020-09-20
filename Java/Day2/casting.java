class casting{
    public static void main(String args[]){
       byte b = 12;
       int i = b;   //up casting
       System.out.println(i);
       int j = 127;
       byte b1 = (byte)j;   //down casting
       System.out.println(b1);
    }
}