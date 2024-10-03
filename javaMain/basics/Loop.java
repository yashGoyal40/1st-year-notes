// 321 to 123
public class Loop {
    public static void main(String[] args) {
        int a= 321;
        int ans = 0;
        while(a>0){
            ans = (ans*10) + a%10;
            a = a/10;
        }
        System.out.println(ans);
    }
}
