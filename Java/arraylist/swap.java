import java.util.*;

public class swap{
    public static void main(String[] args) {
        
        int[] arr = {1,4,2,3,5,7};
        int temp;

        for(int i=0;i<arr.length-1;i++){
            for(int j=0;j<arr.length-i-1;j++){
                if(arr[j]>arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        System.out.println(Arrays.toString(arr));
        
    }
}