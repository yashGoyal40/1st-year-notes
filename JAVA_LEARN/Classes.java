public class Classes{
    public static void main(String[] args) {
        Clases cls = new Clases("yash");
        System.out.println(cls.giveA());
        System.out.println(cls.giveB());
    }
}

class Clases {
    private int a=12;
    private String b="random";

    Clases(int a,String b){
        this.a = a;
        this.b = b;
    }
    Clases(String b){
        this.b = b;
    }
    Clases(int a){
        this.a = a;
    }
    Clases(){

    }
    public int giveA(){
        return this.a;
    }
    public String giveB(){
        return this.b;
    }
}
