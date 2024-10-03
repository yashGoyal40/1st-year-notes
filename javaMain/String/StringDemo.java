import java.util.*;
public class StringDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        System.out.println(a);
        System.out.println(a.length());
        System.out.println(a.charAt(0));
        char b = sc.next().charAt(0);
        System.out.println(b);

        char[] d = a.toCharArray();
        System.out.println(d.length);
        for (int i = 0; i < d.length; i++) {
            System.out.print(d[i] + " ");
        }

        System.out.println(a.substring(0,3));
        String c = "h,e,l,l,o";
        String[] e = c.split(",");
        for (int i = 0; i < e.length; i++) {
            System.out.print(e[i] + " ");
        }

        System.out.println(a.equals(c));
        System.out.println(a.equalsIgnoreCase(c));
        System.out.println(a.toLowerCase());
        System.out.println(a.toUpperCase());
        System.out.println(a.startsWith("Hello"));
        System.out.println(a.endsWith("bye"));
        System.out.println(a.contains("bye"));
        System.out.println(a.trim());
        String[] words = {"Hello", "World", "Java", "Programming"};
        String f = String.join(", ", words);
        System.out.println(f);
        
        System.out.println(a.indexOf("l"));
        System.out.println(a.lastIndexOf("l"));

        sc.close();

    }
}