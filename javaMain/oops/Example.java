
class Animilian{
    int legs;

    Animilian(int legs){
        this.legs = legs;
    }

    // abstract void speak();
    // abstract void eat();

    void breathe(){
        System.out.println("Animal breathes");
    }

}


public class Example extends Animilian{
    Example(int legs){
        super(legs);
    }

    void speak(){
        System.out.println("Dog barks");
    }
    void eat(){
        System.out.println("Dog eats");
    } 

    public static void main(String[] args) {
        Abstract d = new Abstract(4);
        d.speak();
        d.eat();
        d.breathe();
    }

}
