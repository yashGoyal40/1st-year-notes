class Superclass {
    Superclass(){
        System.out.println("Constructor of Superclass");
    }
}

class Subclass extends Superclass{
    Subclass(){
        System.out.println("Constructor of Subclass");
    }
    public void hello(){
        System.out.println("Hello");
    }
}

public class Inheritance{
    public static void main(String[] args) {
        Subclass s = new Subclass();
        s.hello();
    }
}