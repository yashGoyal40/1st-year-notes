import java.util.*;
public class IfElse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        if(a<=  10){
            System.out.println("hello");
        } 
        else if(a>10 && a<20){
            System.out.println("hi");

        }
        else{
            System.out.println("hola");
        }
        sc.close();
    }
}
