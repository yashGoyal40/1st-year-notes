public class TypeConversions {
    public static void main(String[] args) {
        //implicit typecasting
        int a = 4;
        double b =  a;
        System.out.println(b);

        //explcit type casting 
        int c = (int) b;
        System.out.println(c);

        // for string
        String s = "10";
        int si = Integer.parseInt(s);
        System.out.println(si);

        String bool = "true";
        boolean boolb = Boolean.parseBoolean(bool);
        System.out.println(boolb);
         //and so on 
         

    }
    
}