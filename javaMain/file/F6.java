import java.io.*;
public class F6 {
    public static void main(String[] args) {
        File file  = new File("files/hello.txt");
        try{
            file.createNewFile();
        }
        catch(IOException e){
            //nothing to display
        }

        try(BufferedWriter bf = new BufferedWriter(new FileWriter("files/hello.txt",true))){
            bf.write("hello");
            bf.newLine();
            bf.write("hii");
        }
        catch(IOException e){
            System.out.println("cant open file");
        }

        try(BufferedReader b = new BufferedReader(new FileReader("files/hello.txt"))){
            String line;
            while((line =b.readLine()) != null){
                System.out.println(line);
            }
        }
        catch(IOException e){
            System.out.println("cant open file");
        }
    }
}
