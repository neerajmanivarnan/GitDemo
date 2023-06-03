public class stocks2 {
    public int maxProfit(int[] prices) {
        int minPrice = Integer.MAX_VALUE;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            } else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice;
            }
        }

        return maxProfit;
    }

    public static void main(String[] args) {
        stocks2 solution = new stocks2();
        int[] prices = {7, 1, 5, 3, 6, 4};
        int maxProfit = solution.maxProfit(prices);
        System.out.println("Maximum Profit: " + maxProfit);
    }
}
