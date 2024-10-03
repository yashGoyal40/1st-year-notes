import java.util.*;

public class L1 {
    public static void main(String[] args) {
        
  
    List<String> strl = new ArrayList<>();
    strl.add("abc");
    strl.add("def");
    strl.add("ghi");


    for(String s : strl){
        System.out.println(s);
    }
    

    List<Integer> intl = new ArrayList<>();
    intl.add(2);
    intl.add(3);
    intl.add(4);
    intl.add(0,10);
    System.out.println(intl.size());

    for(Integer s : intl){
        System.out.println(s);
    }
    System.out.println(intl);

    intl.remove(Integer.valueOf(10));
    intl.remove(0);
    System.out.println(intl.get(0));
    intl.set(0,20);
    if(!intl.isEmpty()){
        System.out.println(intl);
    }

    System.out.println(intl.indexOf(20));
    intl.add(20);
    System.out.println(intl.lastIndexOf(20));

    System.out.println(intl.contains(4));

    Integer[] arr = intl.toArray(new Integer[intl.size()]);

    Arrays.sort(arr);

    List<Integer> l2 = new ArrayList<>(Arrays.asList(arr));
    System.out.println(l2.reversed());

    System.out.println(l2);
    


    }
}
