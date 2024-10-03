//functional interface ->  interface with only one abstract method

public class Local {

    Local(){
        System.out.println("In Local");
    }

    class Local1{
        void m1(){
            System.out.println("In local1");
        }
    }
    public static void main(String[] args) {
        Local l = new Local();
        Local1 = l.new Local1();
    }
}
