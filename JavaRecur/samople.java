public class samople {
    public static void main(String[] args) {
        pr(5);
    }

    public static void pr(int n){
        if(n == 0){
            return;
        }else{
            System.out.println(n);
            pr(--n);
        }
    }
}
