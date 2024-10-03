import java.io.*;

public class F3 {
    public static void main(String[] args) {
        try(BufferedWriter a = new BufferedWriter(new FileWriter("files/example.txt"))){
            a.write("this is written by F3.java");
        }
        catch(IOException e){
            e.printStackTrace();
        }

        try(BufferedReader r = new BufferedReader(new FileReader("files/example.txt"))){
            String line;
            while((line = r.readLine()) != null){
                System.out.println(line);
            }

        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
}
