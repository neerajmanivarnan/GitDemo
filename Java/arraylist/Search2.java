import java.util.*;

public class Search2 {
    public static void main(String[] args) {
        
    }

    public static ArrayList<Integer> search(int[] arr,int target,int index){
        ArrayList<Integer> list = new ArrayList<Integer>();
        if(index == arr.length){
            list
        }else{
            if(arr[index] == target){
                list.add(index+1);
            }
            ArrayList<Integer> ansBelow = search(arr,target,index+1); 
            list.add(ansBelow);
            return list;
        }
    }
}
