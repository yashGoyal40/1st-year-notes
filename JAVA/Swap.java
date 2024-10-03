import java.util.Scanner;
public class Swap {
    public static void main(String[] args) {
        int a,b;

        Scanner input = new Scanner(System.in);

        System.out.print("Enter first number: ");
        a=input.nextInt();
        System.out.print("Enter second number: ");
        b=input.nextInt();

        System.out.println("Value of:\nA: "+a+"\nB: "+b);
        a=a+b;
        b=a-b;
        a=a-b;
        System.out.println("Value of:\nA: "+a+"\nB: "+b);
    }

}
