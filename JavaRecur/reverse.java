public class reverse {
    public static void main(String[] args) {
        int num  = 1234;
        int power = (int)(Math.log10(num)) + 1;
        //System.out.println(digits);

        System.out.println(rev(num,power));
    }

    public static int rev(int n,int arg){
        if(n%10 == n){
            return n;
        }else{
            return n%10* (int )Math.pow(10,arg-1) + rev(n/10,arg-1);
        }

        
    }

    

}
