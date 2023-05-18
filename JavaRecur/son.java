public class son{
    public static void main(String args[]){
        int num = 237947329;
        System.out.println(sum(num));
    }

    public static  int sum(int n){
        if(n == 0){
            return n;
        }else{
            return sum(n/10) + n%10;
        }
    }

}