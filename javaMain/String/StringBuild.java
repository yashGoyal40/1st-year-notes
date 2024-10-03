public class StringBuild {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder();
        sb.append("Hello");
        sb.append("hi");

        System.out.println(sb.toString());

        sb.insert(5," world ");  
        System.out.println(sb.toString());

        sb.replace(5,12," java ");
        System.out.println(sb.toString());

        sb.delete(5,12);
        System.out.println(sb.toString());

        sb.reverse();
        System.out.println(sb.toString());

        System.out.println(sb.length());

        System.out.println(sb.capacity());

        sb.ensureCapacity(25);
        System.out.println(sb.capacity());

        sb.setLength(5);
        System.out.println(sb.toString());

        
    }

}
