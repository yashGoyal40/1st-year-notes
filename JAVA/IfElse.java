import java.util.Scanner;
public class IfElse {
    public static void main(String[] args) {
        int age;
        Scanner input = new Scanner(System.in);
        System.out.print("enter your age: ");
        age= input.nextInt();
        if(age < 18){
            System.out.print("you are still a kid");
        }
        else if(age == 18){
            System.out.print("you are about to be an adult");
        }
        else{
            System.out.print("you are an adult");
        }
    }
}
