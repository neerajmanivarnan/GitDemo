package ArrayRecursions;

public class sortedArray {
    public static void main(String[] args) {
        int[] array = {1,2,3,5};
        System.out.println(sorted(array,0));
    }

    public static boolean sorted(int[] a,int index){
        if(index == a.length-1){
            return true;
        }else{
            return a[index] < a[index+1] && sorted( a,index+1);
        }
    }
}
