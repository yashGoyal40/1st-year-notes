//Contract between the class and the outside world

interface Animal{
    //abstract methods that are declared in the interface that must be implemented in the class
    void speak();
    void eat();
    void walk();  
    
    //constants in the interface
    //by default public static final
    int Legs = 4;

    //default methods in the interface
    default void displayLegs(){
        System.out.println("Animal has "+Legs+" legs");
    }

    //static methods in the interface
    static void breathe(){
        System.out.println("Animal breathes");
    }
}

class Dog implements Animal{
    
    public void speak(){
        System.out.println("Dog barks");
    
    }
    public void eat(){
        System.out.println("Dog eats");
    }

    public void walk(){
        System.out.println("Dog walks");
    }
    
}

public class Interface {
    public static void main(String[] args) {
       Dog d = new Dog();
       d.displayLegs();
       Animal.breathe();

    }
}
