import java.time.*;
import java.util.*;
public class Date {
    public static void main(String[] args) {
        LocalDate today = LocalDate.now();
        LocalDate specific  = LocalDate.of(2024,04,12);

        System.out.println(today);
        System.out.println(specific);
        System.out.println(specific.getYear());

        System.out.println(specific.getDayOfMonth());
        
        System.out.println(specific.getMonthValue());

        System.out.println(specific.getDayOfYear());

        System.out.println(specific.plusDays(12));
        
        System.out.println(specific.minusDays(12));
        
        System.out.println(specific.minusMonths(12));
        
        System.out.println(specific.plusMonths(12));
        
        System.out.println(specific.plusYears(12));
        
        System.out.println(specific.minusYears(12));

        LocalDate d = LocalDate.of(2024,04,12);

        System.out.println(d.isEqual(specific));

        System.out.println(d.plusDays(10).isAfter(specific));

        System.out.println(d.minusYears(2).isBefore(specific));




    }
}
