public class countZeros {
    public static void main(String[] args) {
            System.out.println(count(1231231));
    }

    

    public static int count(int n){
        return helper(n,0);
    }

    private static int helper(int n, int c) {
        if(n == 0){
            return c;
        }else{
            if(n%10 ==0){
                return helper(n/10,c+1);
            }else{
                return helper(n/10,c);
            }
        }
    }
}
