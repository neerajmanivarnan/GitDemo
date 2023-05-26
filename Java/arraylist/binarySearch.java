class binarySearch {

   


    public static int search(int[] nums, int target) {
       int number = bSearch(nums,target,0,nums.length-1);
       return number; 
    }

    

    public static int bSearch(int[] arr,int target,int lower,int upper){
        int mid;
        mid = (lower+upper)/2;
        if( lower>upper){
            return -1;
        }else{
            if(arr[mid] == target){
                return mid;
            }else{
                if(target>arr[mid]){
                        return bSearch(arr,target,mid+1,upper);
                }else{
                    return bSearch(arr,target,lower,mid-1);
                }

                
            }
        }
    }
}