public class stocks1 {
    public static void main(String[] args) {
        int[]  arr = {7,6,4,3,1};
        System.out.println(maxProfit(arr));
    }


    public static int maxProfit(int[] prices) {
        int pivot;
        int max=0;
        for(int i=0;i<prices.length;i++){
            pivot = prices[i];
            for(int j = i+1;j<prices.length;j++){
                if(prices[j]-pivot>max){
                    max = prices[j] - pivot;
                }
            }
        }

        return max;
    }
}
