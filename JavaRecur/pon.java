public class pon {
    public static void main(String args[]){
        int num = 505;
        System.out.println(pro(num));
    }

    public static  int pro(int n){
        if(n == 0){
            return 1;
        }else{
            System.out.println(n);
            return n%10 * pro(n/10); 
        }
    }
}

