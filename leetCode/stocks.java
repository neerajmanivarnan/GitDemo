import java.util.*;

public class stocks{
    public static void main(String[] args) {
        int[] arr = {7,1,5,3,6,4};
        System.out.println(maxProfit(arr));
    }

    public static  int maxProfit(int[] prices) {
        ArrayList<Integer> list = new ArrayList<Integer>();
        ArrayList<Integer> newList = new ArrayList<Integer>();
        int max;
    

        newList = getMaxProfit(prices,0,0,list);

        

        max = getMax(newList);
        return max;
    }

    public static int getMax(ArrayList<Integer> list) {
        int max=0;
        max=list.get(0);
        for(int i = 0;i<list.size();i++){
            if(list.get(i)>max){
                max = list.get(i);
            }
        }

        return max;
    }

    public static ArrayList<Integer> getMaxProfit(int[] prices,int pivot, int index, ArrayList<Integer> list) {
        if(pivot == prices.length-1){
            return list;
        }else{

            if(index<=prices.length-1){
                list.add(prices[index] - prices[pivot]);
                getMaxProfit(prices, pivot, index+1, list);
                return list;
            }else{
                getMaxProfit(prices, pivot+1, pivot+1, list);
                return list;
            }
        }

    }


}

