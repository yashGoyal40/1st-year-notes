class Parent {

    final int ContValue = 10;

    final void finalMethod() {
        System.out.println("Final method in Parent class");
    }
}

class Child extends Parent {
    // This method attempts to override the finalMethod() of the superclass
    // This will result in a compilation error
    // @Override
    // void finalMethod() {
    //     System.out.println("Overridden final method in Child class");
    // }
    public void prntcont() {
        System.out.println(ContValue);
        // super.ContValue = 11; // This will result in a compilation error
    }
}

public class Final {
    public static void main(String[] args) {
        Child child = new Child();
        child.finalMethod(); // Output: Final method in Parent class
        child.prntcont(); // Output: 10
    }
}
