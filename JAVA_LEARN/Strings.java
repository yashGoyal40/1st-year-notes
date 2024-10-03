import java.util.Scanner;
public class Strings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        // .equals("yes")
        if(s.equalsIgnoreCase("yes")){
            System.out.println(true);
        }
        else if(s.equalsIgnoreCase("no")){
            System.out.println(false);
        }
        else{
            System.out.println("galat");

        }
        sc.close();
    }
}
