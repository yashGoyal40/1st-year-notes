import java.util.*;
import java.io.*;
public class P1 {
    public static void main(String[] args) {
        try(BufferedReader b = new BufferedReader(new FileReader("hello.txt"))){
            System.out.println(b.readLine());
        }
        catch(IOException e){
            System.out.println("file not found");
        }
    }
}   
