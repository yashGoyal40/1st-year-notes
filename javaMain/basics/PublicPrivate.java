public class PublicPrivate {
    //access modifiers

    private static String hello(){
        return "hello";
    }
    private  String hi(){
        return "hi";
    }



    public static void main(String[] args) {
        System.out.println(hello());

        PublicPrivate n = new PublicPrivate();
        System.out.println(n.hi());
        Secendory s = new Secendory();
        s.hola();
    }
}

class Secendory{
    public void hola(){
        System.out.println("hola");
    }
}