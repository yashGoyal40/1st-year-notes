public class Varargs {
    public static int sum(int... numbers){
        int sum = 0;
        for(int ele: numbers){
            sum+=ele;
        }
        return sum;
    }
    public static void main(String[] args) {
        int s = sum(1,2,3,4);
        int l = sum(1,2);
        int a = sum(1,2,3,4,5,6,7);
        System.out.println(s);
        System.out.println(l);
        System.out.println(a);
    }
}
