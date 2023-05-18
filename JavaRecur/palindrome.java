public class palindrome {
    public static void main(String[] args) {
        System.out.println(pal(12213));
    }

    public static boolean pal(int n){
        int digits  = (int)(Math.log10(n)) + 1;
        if(n == rev(n,digits)){
            return true;
        }else{
            return false;
        }
    }

    public static int rev(int n,int arg){
        if(n%10 == n){
            return n;
        }else{
            return n%10* (int )Math.pow(10,arg-1) + rev(n/10,arg-1);
        }

        
    }
}
