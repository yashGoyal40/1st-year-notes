interface Ints{
    void show();
}

// class instimp implements ints{
//     public void show(){
//         System.out.println("In instimp");
//     }
// }

public class Lamdda {
    public static void main(String[] args) {
        // Ints obj = new Ints(){
        //     public void show(){
        //         System.out.println("In instimp");
        //     }
        // };

       Ints obj = () -> {System.out.println("in instimp");};
        obj.show();
    }
}
