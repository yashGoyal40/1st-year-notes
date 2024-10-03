public class MultiArr {
    public static void main(String[] args) {
        int[][] arr = {{1,2,3},{4,5,6}};
        int a = arr.length;
        int b = arr[1].length;
        // for a new array length will be b lenght per array will be a
        int [][] ar = new int[b][a];

        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                ar[j][i] = arr[i][j];
            }
        }
        for(int i=0;i<b;i++){
            for(int j=0;j<a;j++){
                System.out.print(ar[i][j]+" ");

            }
            System.out.println();
        }


    }
}
