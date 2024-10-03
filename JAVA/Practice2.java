import java.util.Scanner;
class Practice2{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a,b;
        System.out.print("Enter the 1st number: ");
        a=input.nextInt();
        System.out.print("enter the 2nd number: ");
        b=input.nextInt();
        int sum = a+b;
        System.out.println("sum of both the numbers is : "+sum);
    }
}