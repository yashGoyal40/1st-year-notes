import java.util.Scanner;
class IfEl{
    public static void main(String[] args){
        Scanner input1  = new Scanner(System.in);
        char option = input1.next().charAt(0);
        if(option == 'y' || option == 'Y'){
            System.out.println("The answer is yes");
        }
        else if(option == 'n' || option == 'N'){
            System.out.println("The answer is no");
        }
        else{ 
            System.out.println("chose correct option");
        }
        input1.close();
    }

}