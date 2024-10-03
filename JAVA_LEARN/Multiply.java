public class Multiply {
    public static void main(String[] args) {
        int[][] arr1 ={{2,3},{4,5},{6,7}};
        int[][] arr2 ={{1,2,3},{4,5,6}};


        //lengths of array 1
        int arr1H = arr1.length;
        int arr1W = arr1[0].length;

        //length of array 2
        int arr2H = arr2.length;
        int arr2W = arr2[0].length;

        if(arr1W != arr2H ){
            System.out.println("cant multiply matrics");
            return;
        }

        //height width of final matrices 
        int[][] farr = new int[arr1H][arr2W];

        for(int i=0;i<arr1H;i++){
            for(int j=0;j<arr2W;j++){
                int sum =0;
                for(int k=0;k<arr1W;k++){
                    sum+= arr1[i][k]*arr2[k][j];
                }
                farr[i][j] = sum ;
            }
        }
        
        for(int i=0;i<arr1H;i++){
            for(int j=0;j<arr2W;j++){
                System.out.print(farr[i][j]+" ");
            }
            System.out.println();
        }


    }
}
