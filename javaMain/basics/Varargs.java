public class Varargs {
    public static void printnums(int ...numbers){
        for(int i : numbers){
            System.out.println(i);
        }
    }
    public static void main(String[] args) {
        printnums(10,20,30);
    }
}
