import java.util.*;
import java.time.format.DateTimeFormatter;
import java.time.*;
import java.time.temporal.ChronoUnit;
public class Between {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String stDateTime = sc.nextLine();
        LocalDateTime std = LocalDateTime.parse(stDateTime , DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm"));
        String endDateTime = sc.nextLine();
        LocalDateTime etd = LocalDateTime.parse(endDateTime, DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm"));

        long hours = ChronoUnit.HOURS.between(std,etd);
        long minutes = ChronoUnit.MINUTES.between(std,etd) %60;
        System.out.println(hours);
        System.out.println(minutes);
    }
}
