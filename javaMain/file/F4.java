import java.io.*;
public class F4 {
    public static void main(String[] args) {
        File file = new File("files/example.txt");
        if(file.exists()){
            System.out.println("File exists");

            System.out.println(file.getName());
            System.out.println(file.getAbsolutePath());
            System.out.println(file.length());
        }
        else{
            System.out.println("File does not exist");
        }
    }
}
