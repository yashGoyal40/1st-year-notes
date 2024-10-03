import java.util.*;
public class Al {
    public static void main(String[] args) {
        
    
    TreeSet<Integer> ts = new TreeSet<>();
    ts.add(10);
    ts.add(30);
    ts.add(20);
    ts.add(20);
    ts.remove(10);
    ts.add(40);
    System.out.println(ts.contains(10));
    System.out.println(ts.size());
    System.out.println(ts); 
    System.out.println(ts.ceiling(20));
    System.out.println(ts.floor(20));
    System.out.println(ts.higher(20));
    System.out.println(ts.lower(20));

    
   
    }
}
