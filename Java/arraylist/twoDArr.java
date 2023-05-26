import java.util.*;

public class twoDArr {
    public static void main(String[] args) {
        int[][] arr =  new int[3][3];
        Scanner in = new Scanner(System.in);

        //System.out.println(arr.length);

        //System.out.println(arr[0].length);

        for(int i=0; i< arr.length ; i++){
            for(int j = 0 ; j < arr[i].length ; j++ ){
                System.out.println("Enter the element : ");
                arr[i][j] = in.nextInt();
            }   
        }

        // for(int i=0; i< arr.length ; i++){
        //     for(int j = 0 ; j < arr[i].length ; j++ ){
        //         System.out.print(arr[i][j]+ " ");
                
        //     }  
        //     System.out.println("\n"); 
        // }

        for(int i = 0; i < arr.length ; i++ ){
            System.out.println(Arrays.toString(arr));
        }

        

    }
}
