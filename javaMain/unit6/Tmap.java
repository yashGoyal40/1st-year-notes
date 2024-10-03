import java.util.*;

public class Tmap {
    public static void main(String[] args) {
        
    
    Map<Integer,String> m = new HashMap<>();
    Map<Integer,String> n = new HashMap<>();
    m.put(10,"yash");
    m.put(11,"yash2");
    m.put(12,"yash1");
    m.remove(11);
    System.out.println(m.get(12));
    System.out.println(m.containsKey(11));
    System.out.println(m.containsValue("yash"));
    System.out.println(m.isEmpty());
    System.out.println(m.size());
    System.out.println(m.equals(n));

    System.out.println(m);
    System.out.println(m.values());
    System.out.println(m.keySet());

    
}}
