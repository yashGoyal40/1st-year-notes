enum Day{
    monday,tuesday,wednusday,thrusday,friday,saturday,sunday;
    public String discription;

    Day(){
        this.discription = "the day is "+this.name();
    }

    public String getDiscription(){
        return this.discription;
    }

}
public class Enum1 {
    public static void main(String[] args) {
        Day day = Day.saturday;
        String s = day.getDiscription();
        System.out.println(s);

        for(Day val:Day.values()){
            System.out.println(val);
        }
    }
}
