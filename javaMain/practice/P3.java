interface evod<T extends Number>{
    boolean checkEvOd(T a);
}

public class P3 {
    public static void main(String[] args) {
        evod<Integer> obj = (a) -> {return (a%2 == 0);};
        System.out.println(obj.checkEvOd(11)); 
    }
    
}
