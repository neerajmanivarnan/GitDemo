import java.util.Arrays;

public class ss {
    public static void main(String[] args) {
        int[] arr = {5,4,3,2,1,-67,-88,0};
        sort(arr);
        System.out.println(Arrays.toString(arr));
    }

    public static void sort(int[] arr){
        int firstIndex;// = arr.length-1;
        int minIndex; //= getMaxIndex(arr,lastIndex,0);

        for(int i=0;i<arr.length-1;i++){
            firstIndex = i;
            minIndex = getMinIndex(arr,firstIndex,arr.length-1);
            swap(arr,minIndex,firstIndex);
        }
    }

    public static void swap(int[] arr, int maxIndex, int lastIndex) {
        int temp = arr[maxIndex];
        arr[maxIndex] = arr[lastIndex];
        arr[lastIndex] = temp;

    }

    public static int getMinIndex(int[] arr, int first, int last) {
        int min = first;
        for(int i = first;i<=last;i++){
            if(arr[i]<arr[min]){
                min = i;
            }
        }

        return min;
    }


}
