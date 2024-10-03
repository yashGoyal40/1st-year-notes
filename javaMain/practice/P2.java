import java.util.*;

class Q1 extends Exception{
    Q1(String message){
        super(message);
    }
}

public class P2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] s = sc.nextLine().split(",");

        Set<Integer> arr = new HashSet<>();
        for(String i : s){
            int ii = Integer.parseInt(i);
            try{
                if(arr.contains(ii)){
                    throw new Q1("digits repeated");
                }
                else{
                    arr.add(ii);
                }
            }
            catch(Q1 e){   
                System.out.println(e);
            }
        }
        
    }
}
