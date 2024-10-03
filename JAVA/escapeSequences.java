public class escapeSequences {
    public static void main(String[] args) {
        System.out.println("hello \"world\"");

        // \ is used as escape sequence
        // \" \" will be used
        // \n new line
        System.out.println("hello\nworld");
        // \t for tab
        System.out.println("hello\tworld");
        // \b for going one back
        System.out.println("hello\bWorld"); //o will not be printed because of that

    }
}
