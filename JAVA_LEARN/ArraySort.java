
import java.util.*;
// import java.math.*;
public class ArraySort {
    public static int[] arraySort(int[] arr){
        for(int j = 0 ;j<arr.length-1;j++){
        for(int i=0;i<arr.length-1-j;i++){
            if(arr[i] > arr[i+1]){
                arr[i] = arr[i] + arr[i+1];
                arr[i+1] = arr[i] - arr[i+1];
                arr[i] = arr[i] - arr[i+1];
            }
        }}

        return arr;
    }
    public static void main(String[] args){
        // MathContext nrx = new MathContext(3);
        // BigDecimal bg = new BigDecimal("2.2323",nrx);
        Scanner sc = new Scanner(System.in);
        System.out.print("enter a number: ");
        int no= sc.nextInt();
        int[] arr = new int[no];
        for(int i=0;i<no;i++){
            int ele = sc.nextInt();
            arr[i] = ele;
        }
        sc.close();

        int[] sortedArr = arraySort(arr);

        for(int ele: sortedArr){
            System.out.println(ele+" ");
        }



    }
}
