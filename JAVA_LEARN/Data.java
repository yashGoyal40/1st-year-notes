import java.util.*;
import java.math.*;

public class Data {
    public static void main(String[] args) {
        Scanner input  = new Scanner(System.in);
        String s = input.next();
        MathContext mtx = new MathContext(3);
        BigDecimal bd = new BigDecimal(s,mtx);
        System.out.println(bd);
        input.close();
    }
    

    
}