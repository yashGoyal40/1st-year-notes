import java.time.*;

public class DateTime {
    public static void main(String[] args) {
        LocalDateTime dt = LocalDateTime.of(2024,3,12,8,43);
        LocalDateTime dt1 = LocalDateTime.now();

        System.out.println(dt);
        System.out.println(dt1);

        //functions are inherit from localdate and localtime 

        System.out.println(dt.getDayOfYear());
        System.out.println(dt.getMonthValue());
        System.out.println(dt.isEqual(dt1));
        System.out.println(dt.isBefore(dt1));
        System.out.println(dt.isAfter(dt1));
        
    }
}
