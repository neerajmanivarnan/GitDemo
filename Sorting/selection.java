import java.util.Arrays;

public class selection{
    public static void main(String[] args) {
        int[] arr = {8,7,6,5,4,3,2,0,-1,-3};
        sort(arr);
        System.out.println(Arrays.toString(arr));
    }

    public static void sort(int[] arr){
        for(int i=0;i<arr.length-1;i++){
            int lastIndex = arr.length-i-1;
            int maxIndex = getMaxIndex( arr,0,lastIndex);

            swap(arr,lastIndex,maxIndex);

        }
    }

    public static void swap(int[] arr, int lastIndex, int maxIndex) {
        int temp = arr[lastIndex];
        arr[lastIndex] = arr[maxIndex];
        arr[maxIndex] = temp;

    }

    public static int getMaxIndex(int[] arr,int start,int last) {
        int max = start;
        for(int i =start;i<=last;i++){
            if(arr[i] > arr[max]){
                max = i;
            }
        }
        return max;
    }

}