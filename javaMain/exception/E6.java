//Assertion Error

import java.util.Scanner;
public class E6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        try{
            devide(a);
        }
        catch(AssertionError e){
            System.out.println(e);
        }
    }

    static int devide(int a) throws AssertionError{
        assert a != 0 : "must not be zero";
        return 10/a ;
    }
}
