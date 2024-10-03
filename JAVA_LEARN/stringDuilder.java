public class stringDuilder {
    public static void main(String[] args) {
        StringBuilder name = new StringBuilder("hello");
        name.append(" world");
        System.out.println(name);
        name.insert(6,"yash's ");
        System.out.println(name);
        name.reverse();
        System.out.println(name);
        name.delete(0,4);
        System.out.println(name);
        name.replace(0,4,"yash");
        System.out.println(name);
        String s = name.toString();
        System.out.println(s);
        System.out.println(name.charAt(0));
        StringBuilder ss = new StringBuilder("yash");
        ss.replace(0,1,"k");
        System.out.println(ss);
        int a =3433;
        String no = String.valueOf(a);
        StringBuilder sb = new StringBuilder(no);



    }
    

}
