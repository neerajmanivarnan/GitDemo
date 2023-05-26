class Palindrome {

    public static void main(String[] args) {
            System.out.println(rev(345,3));
    }

    public static int rev(int n,int arg){
        if(n%10 == n){
            return n;
        }else{
            return n%10* (int )Math.pow(10,arg-1) + rev(n/10,arg-1);
        }

        
    }

    public static String rev1(int n){
        String num1 = n+"";
        StringBuffer reversedString = new StringBuffer(num1);
        reversedString = reversedString.reverse();
        String Answer = reversedString.toString();
        return


    }



    public  boolean isPalindrome(int x) {
        if(x<0){
            return false;
        }

        int digits = (int)Math.log10(x)+1;
        if(rev(x,digits)==x){
            return true;
        }else{
            return false;
        }
    }


}