import java.util.*;

public class Search {
    public static void main(String[] args) {
        int[] newArr = {1,2,3,4,5,6,7,7,7,8,9,10};
        ArrayList<Integer> newList = new ArrayList<>();
        System.out.println(search(newArr,7,0,newList));
    }

    public static ArrayList<Integer> search(int[] arr,int target,int index,ArrayList<Integer> list){
        if(index == arr.length-1){
            return list;
        }else{
            if(arr[index] == target){
                list.add(index+1);
                return search(arr,target,index+1,list);
            }else{
                return search(arr,target,index+1,list);
            }
        }
    }


}
