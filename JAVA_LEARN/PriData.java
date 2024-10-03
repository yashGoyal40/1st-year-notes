import java.util.*;
import java.math.*;
public class PriData {

    public static void main(String[] args){

        Scanner input1  = new Scanner(System.in);
        String b = input1.next();
        // String line  = input.nextLine();
        // int a = input1.nextInt();
        //double d = input.nextDouble();
        // char a  = input.next().charAt(0);
        BigDecimal decimal = new BigDecimal(b);
        System.out.println(decimal);
        input1.close();
    }
}
