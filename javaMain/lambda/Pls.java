
interface Sum{
    int printSum(int a,int b);
}

class Pls{
    public static void main(String[] args) {
        Sum s = (a,b) -> {return a+b;};
        System.out.println(s.printSum(2,4));
    }
}


