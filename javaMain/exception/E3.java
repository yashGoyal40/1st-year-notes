import java.util.Scanner;

public class E3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            int a = sc.nextInt();
            if (a < 0) {
                throw new IllegalArgumentException("age can not be negative");
            }
        } catch (IllegalArgumentException e) {
            System.out.println(e.getMessage());
        }

        
    }
}
