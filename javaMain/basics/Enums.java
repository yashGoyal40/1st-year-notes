enum Direction {
    EAST, WEST, NORTH, SOUTH
}

enum days {
    Monday(1), Tuesday(2), Wednesday(3), Thursday(4), Friday(5), Saturday(6), Sunday(7);
    private final int value;

    days(int value) {
        this.value = value;
    }

    public int getValue() {
        return value;
    }
}

public class Enums {
    public static void main(String[] args) {
        Direction dir = Direction.NORTH;

        for (days d : days.values()) {
            System.out.println(d);
        }

        days d = days.Monday;
        System.out.println(d.getValue());

        for (Direction m : Direction.values()) {
            System.out.println(m);
        }
    }
}
