import java.util.Scanner;
//present in JRE
public class UserInput {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Please enter your name: ");
        String name = input.nextLine();

        System.out.println("Nice name "+name);
        System.out.print("Can you tell me your age: ");
        int  age = input.nextInt();

        System.out.println("So your age is "+age);

        /*
        nextLine();
        nextInt();
        nextBoolean();
        nextFloat();
        nextDouble(); etc:
         */

    }
}
