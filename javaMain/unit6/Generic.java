

class Box<T> {
    private T value;

    public Box(T value){
        this.value = value; 
    }

    public T getValue(){
        return value;
    }
    public void setValue(T value){
        this.value = value;
    }
    public void printValue(){
        System.out.println(this.value);
    }
}

public class Generic{
    public static void main(String[] args) {
        Box<Integer> a = new Box<>(10);
        a.printValue();
        a.setValue(12);
        a.printValue();

        Box<Boolean> b = new Box<>(true);
        b.printValue();
        b.setValue(false);
        b.printValue();
    }
}
