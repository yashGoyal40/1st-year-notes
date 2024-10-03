class Animal {
    String name;

    Animal(String name) {
        this.name = name;
        System.out.println("Animal constructor with name: " + name);
    }
    public void eat(){
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal {
    Dog(String name) {
        super(name); // Call the parameterized constructor of the superclass
        System.out.println("Dog constructor with name: " + name);
    }
    public void eat(){
        super.eat();
    }
}

public class Super {
    public static void main(String[] args) {
        Dog dog = new Dog("Buddy"); 
        // Output: Animal constructor with name: Buddy\nDog constructor with name: Buddy
        dog.eat(); 
    }
}
