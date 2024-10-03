import java.util.*;
import java.time.format.DateTimeFormatter;
import java.time.*;

public class Fromatter {
    public static void main(String[] args) {
        DateTimeFormatter fmt = DateTimeFormatter.ofPattern("dd-MM-yyyy");
        LocalDate ld = LocalDate.parse("03-12-2024",fmt);
        System.out.println(ld);
        LocalDate formatedDate = LocalDate.parse("12-03-2024",fmt);
        System.out.println(formatedDate);
    }
}
