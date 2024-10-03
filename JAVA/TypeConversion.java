public class TypeConversion {
    public static void main(String[] args){
        float f = 5L; //automatic type conversion
        // will make it 5.0
        //this is implicit conversion
        //float myFloat = 5d;
        //will not do it automatically
        // because double is bigger than float

        //explicit conversion or typecasting
        int a = (int) 6.7;
        int b = (int) 3.144F;
        System.out.println(a);
        System.out.println(b);




    }
}
