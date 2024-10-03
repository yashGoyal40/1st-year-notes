interface A{
    default void m1(){
        System.out.println("Method  of A");
    }
}

interface B extends A{
    default void m1(){
        System.out.println("Method of B");
    }
}

interface C extends A{
    default void m1(){
        System.out.println("Method of C");
    }
}

public class Main implements B,C{
    public void m1(){
        // B.super.m1();
        C.super.m1();
    }
    public static void main(String[] args) {
        Main m = new Main();
        m.m1();
    }
}