import java.util.Scanner;
public class IfElse2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = input.nextLine();
        System.out.print("Enter your gender "+name+": ");
        boolean isMale;

        // boolean isMale = input.next().equalsIgnoreCase("M");
        if(input.next().charAt(0) == 'M' || input.next().charAt(0) == 'm'){
            isMale = true;
        }
        else{
            isMale = false;
        }

        if(isMale){
            System.out.println("congratulation "+name+" you have stated your gender");
        }


    }
}
