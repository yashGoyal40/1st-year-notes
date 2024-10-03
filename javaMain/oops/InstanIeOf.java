class Animal {
    // Class definition
}

class Dog extends Animal {
    // Class definition
}

class Cat extends Animal {
    // Class definition
}

public class InstanIeOf {

    public static void main(String[] args) {
        Animal animal = new Dog();

        // Check if 'animal' is an instance of Animal class
        if (animal instanceof Animal) {
            System.out.println("animal is an instance of Animal class");
        }

        // Check if 'animal' is an instance of Dog class
        if (animal instanceof Dog) {
            System.out.println("animal is an instance of Dog class");
        }

        // Check if 'animal' is an instance of Object class
        if (animal instanceof Object) {
            System.out.println("animal is an instance of Object class");
        }

        // Check if 'animal' is an instance of a non-existent class
        if (animal instanceof Cat) {
            System.out.println("animal is an instance of Cat class");
        } else {
            System.out.println("animal is not an instance of Cat class");
        }

        Integer a=10;
        if(a instanceof Integer){
            System.out.println("a is an instance of Integer class");
        }
    }


}
