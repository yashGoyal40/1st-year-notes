
interface I1 {
    void m1();
}

interface I2 {
    void m2();
}



public class Inherit implements I1, I2{
    @Override
    public void m1() {
        System.out.println("Method m1");        
    }
    public void m2() {
        System.out.println("Method m2");        
    }
}
