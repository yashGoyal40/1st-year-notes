import java.util.Scanner;
public class Case {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char a = sc.next().charAt(0);
        switch (a) {
            case 'a':
                a = 'b';
                break;
            case 'b':
                a = 'a';
                break;
            default:
                break;
        }
        System.out.println(a);
        sc.close();
        
    }
}
