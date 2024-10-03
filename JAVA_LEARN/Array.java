import java.util.*;
public class Array {
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter a number: ");
        int no= sc.nextInt();
        int[] arr = new int[no];
        for(int i=0;i<no;i++){
            int ele = sc.nextInt();
            arr[i] = ele;
        }

        int peek = findPeek(arr);
        System.out.println(peek);
        sc.close();

    }
    public static int findPeek(int[] arr){
        int peek = arr[arr.length -1];
        int l=0,m=0;
        while(m < (arr.length)-1){
            m++;
            if(arr[l]<arr[m]){
                l++;
            }
            else{
                peek = arr[l];
            }
        }
        return peek;
    }
}
