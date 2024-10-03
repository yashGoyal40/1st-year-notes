import java.util.*;

public class PrimeNo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a  = sc.nextInt();
        boolean prime = true; 
        
        if(a <= 1){
            prime = false; 
        } else {
            for(int i = 2; i <= (int)Math.sqrt(a); i++){
                if(a % i == 0){
                    prime = false; 
                    break;
                }
            }
        }
        
        if(prime){
            System.out.println("Number is prime");
        } else {
            System.out.println("Number is not prime");
        }
        
        sc.close();
    }
}
