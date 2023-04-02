public class sortedArray{
    public static void main(String[] args) {
        int[] a = {1,2,3,6,5};
        boolean b = sorted(a,0);
        if(b){
            System.out.println("Arra is sorted");
        }else{
            System.out.println("Array is not sorted");
        }
    }


    static boolean sorted(int[] arr,int index){
        if(index==arr.length-1){
            return true;
        }else{
            return arr[index] < arr[index+1] && sorted(arr, index+1);
        }
    }


}