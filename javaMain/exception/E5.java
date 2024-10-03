class custom extends Exception{
    custom(String message){
        super(message);
    }
}

public class E5 {
    public static void main(String[] args) {
        try{
            int a= 12;
            if (a>2){
                throw new custom("custom error");
            }
        }
        catch(Exception e){
            System.out.println(e.getMessage());
        }
    
}
}
