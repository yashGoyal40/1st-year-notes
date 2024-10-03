import java.util.*;

class InvalidAge extends Exception{
    public InvalidAge(String message){
        super(message);
    }
}
public class one {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            System.out.println("Enter Age");
            int age = sc.nextInt();
            if(age <1){
                throw new InvalidAge("enter vaid age");
            }
            System.out.println("your age is "+age);
        }
        catch(InvalidAge e){
            System.out.println(e);      
        }
        catch (InputMismatchException ex){
            System.out.println("Enter valid age in integer");
        }

    }

    
}
