import java.util.*;


public class maxVal {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5};
        System.out.println(maxVal(arr,0,0));
        int[] newAr = reverse(arr,0,arr.length-1,0);
        System.out.println(Arrays.toString(newAr));


    }

    public static int maxVal(int[] arr, int index,int max) {
        if(index==arr.length){
            return max;
        }else{
            if(arr[index]>max){
                max = arr[index];
                return maxVal(arr, index+1, max);
            }else{
                return maxVal(arr, index+1, max);
            }
        }
    }

    public static int[] reverse(int[] arr,int start,int end,int count){
        if(start == end){
            return arr;
        }else{
            int temp;
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            return reverse(arr,start+1,end-1,count+1) ;
        }
    }
}
