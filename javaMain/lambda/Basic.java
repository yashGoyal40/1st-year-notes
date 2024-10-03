//anonymous classs

interface Anony{
    void show();
}
// class AnonyDemo implements Anony{
//     public void show(){
//         System.out.println("In AnonyDemo");
//     }
// }
public class Basic {
    

    public static void main(String[] args) {
        // AnonyDemo obj = new AnonyDemo();
        // obj.show();

        Anony obj = new Anony() {
            public void show(){
                System.out.println("In AnonyDemo");
            }
        };

        obj.show();

    }
}
