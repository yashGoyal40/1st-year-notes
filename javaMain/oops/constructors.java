
class Car{
    public String name;
    public int price;

    public void blowHorn(){
        System.out.println("peeee peeee");
    }

    //constructer
    Car(String name, int price){
        this.name = name;
        this.price = price;
    }
    Car(String name){
        this.name = name;
    }

}

class Tesla extends Car{
    Tesla(String name){
        super(name);
    }
    Tesla(String name,int price){
        super(name, price);
    }

    @Override
    public void blowHorn(){
        System.out.println("Tesla horn");
    }

}
public class constructors {
    public static void main(String[] args) {
        Car c = new Car("Audi", 5000000);
        System.out.println(c.name);
        System.out.println(c.price);
        c.blowHorn();
        Tesla t = new Tesla("Tesla", 10000000);
        System.out.println(t.name);
        t.blowHorn();
    }
}
