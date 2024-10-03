import java.io.*;

public class F2{
    public static void main(String[] args) {
        try(BufferedReader a = new BufferedReader(new FileReader("files/example.txt"))){
            String line;
            while(line = a.readLine() != null){
                System.out.println(line);
            }
        }
        catch(IOException e){
            e.printStackTree();
        }
    }
}