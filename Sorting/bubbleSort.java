package ArrayRecursions;

import java.util.Arrays;

public class bubbleSort {
    public static void main(String[] args) {
        int[] arr = {4,3,2,1};
        sort(arr,arr.length-1,0);
        System.out.println(Arrays.toString(arr));
    }


    public static void sort(int[] arr,int size,int index){
        if(size == 0){
            return ;
        }
            if(index<size){
                if(arr[index] > arr[index+1]){
                    int temp;
                    temp = arr[index] ;
                    arr[index] = arr[index+1];
                    arr[index+1] = temp;
                    //sort(arr,size,index+1);
    
                }
                    sort(arr,size,index+1);
                
                 
            }
                 sort(arr,size-1,index);
            
        
    }
}
