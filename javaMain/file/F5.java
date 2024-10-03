import java.io.*;
public class F5 {
    public static void main(String[] args) {
        try(BufferedWriter bf = new BufferedWriter(new FileWriter("files/example.txt",true))){
            bf.newLine();
            bf.write("this is line 1");
            bf.newLine();
            bf.write("this is line 2");
            bf.newLine();
        }
        catch(IOException e){
            System.out.println("file not opened");
            // e.printStackTrace();
        }

        try(BufferedReader b = new BufferedReader(new FileReader("files/example.txt"))){
            String line;
            while((line = b.readLine()) != null){
                System.out.println(line);
            }
        }
        catch(IOException e){
            System.out.println("file not opened");
        }
    }

}
