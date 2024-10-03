public class Loops {
    public static void main(String[] args) {
        int a  = 1;
        while(true){
            a++;
            if(a == 5){
                System.out.println("5");
                break;
            }
        }
        for(int i=0;i<4;i++){
            System.out.print(i+" ");

        }
        System.out.println();
        int c = 1;
        do{
            ++c;
            System.out.print(c+" ");

        }while(c<3);
        System.out.println();


        int [] number = {1,2,3,4,6};
        for(int l:number){
            System.out.print(l+" ");

        }
    }
}
