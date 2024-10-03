
import java.time.*;
import java.util.*;

public class Time {
    public static void main(String[] args) {
        LocalTime t = LocalTime.of(13,34,12);
        LocalTime t1 = LocalTime.now();

        System.out.println(t);
        System.out.println(t1);

        System.out.println(t.getHour());
        System.out.println(t.getMinute());
        System.out.println(t.getSecond());

        System.out.println(t.plusHours(10));
        System.out.println(t.plusMinutes(10));
        System.out.println(t.plusSeconds(10));
        
        System.out.println(t.minusSeconds(10));
        System.out.println(t.minusMinutes(10));
        System.out.println(t.minusHours(10));

        System.out.println(t.isAfter(t1));
        System.out.println(t.equals(t1));
        System.out.println(t.isBefore(t1));

    }
    
}
