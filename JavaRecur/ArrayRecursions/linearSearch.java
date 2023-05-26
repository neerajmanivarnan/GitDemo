package ArrayRecursions;

public class linearSearch {
    public static void main(String[] args) {
        int[] array = {1,2,3,4,5,6,7,8,9};
        System.out.println(searchIndex(array,4,0));
    }

    public static boolean search(int[] a,int target,int index){
        if(index == a.length){
            return false;
        }else{
            return a[index] == target || search(a,target,index+1);
        }
    }

    

}
