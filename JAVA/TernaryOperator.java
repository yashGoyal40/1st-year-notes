import java.util.Scanner;
public class TernaryOperator {
    public static void main(String[] args) {
        Scanner input= new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        System.out.println(a>b ? "the greater is: "+a : "the greater is: "+b);
    }
}
