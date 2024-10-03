interface Hii{
    void sayHi();
}

public class Anny {
    public static void main(String[] args) {
        Hii obj = new Hii() {
            public void sayHi(){
                System.out.println("hiii");
            }
        };
        obj.sayHi();
    }
}
