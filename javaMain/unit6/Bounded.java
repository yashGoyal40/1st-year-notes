import java.util.List;

class dabba<T extends Number> {
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


public class Bounded {
    static void PrintValue(List<?> list){
        for(Object element : list){
            System.out.println(element);
        }
    }
    static void PrintValueConstrain(List<? extends number> list){
        for(Number element : list){
            System.out.println(element);
        }
    }

    public static void main(String[] args) {
        
    }
    
}
