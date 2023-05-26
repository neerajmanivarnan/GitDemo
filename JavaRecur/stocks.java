import java.util.*;
public class stocks {

    public static void main(String[] args) {
        int[] name= {7,1,5,3,6,4};
        System.out.println(maxProfit(name));
    }

    public static  int maxProfit(int[] prices) {
        ArrayList<Integer> list = new ArrayList<>();
        ArrayList<Integer> newlist = new ArrayList<>();
        newlist = helper1(prices,prices[0],list);

        int num = getMax(newlist);
        
        return num;
    }

    public static int getMax(ArrayList<Integer> list){
        int max = list.get(0);
        for(int num : list){
            if(num>max){
                max = num;
            }
        }

        return max;
    }

    public static ArrayList<Integer> helper1(int[] prices,int index,ArrayList<Integer> list) {
        if(index == prices.length-1){
            return list;
        }else{
            list.add(helper2(prices,index));
           return helper1(prices,index+1,list);
        }
    }

    public static int helper2(int[] arr,int number){
        int pivot = arr[number];
        int max = 0;
        for(int i=number+1;i<arr.length;i++){
            if(arr[i]-pivot>max){
                max = arr[i]-pivot;
            }
        }

        return max;
    }

}