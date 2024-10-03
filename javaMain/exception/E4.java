import java.util.Scanner;
// import java.util.scanner;
public class E4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        try{
            System.out.println(devide(a));
        }catch(ArithmeticException e){
            System.out.println("cant be zero");
        }
    }

    static int devide(int a) throws ArithmeticException{
        return 10/a;
    }
}


/*

try-with

try(open a file){

}
catch(FileNotFoundException | IOException e){

}

 */