import java.util.*;

public class Anangram {

    public static void method1(String s1, String s2){
        char[] arr1 = s1.toCharArray();
        char[] arr2 = s2.toCharArray();
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        for(int i = 0;i<arr1.length;i++){
            if(arr1[i] != arr2[i]){
                System.out.println("false");
                return;
            }
        }
        System.out.println("true");
    }
    public static void method2(String s1, String s2){
        int[] count = new int[26];
        for(char c : s1.toCharArray()){
            count[c - 'a']++;
        }
        for(char c : s2.toCharArray()){
            count[c - 'a']--;
        }

        for(int i:count){
            if(i != 0){
                System.out.println("false");
                return;
            }
            
            System.out.println("true");
            return;
        }
    }
    public static void main(String[] args) {
        String s1 = "hello";
        String s2 = "elOlh";
        if(s1.length() != s2.length()){
            System.out.println("no");
            return;
        }
        s1 = s1.toLowerCase().replaceAll("\\s","");
        s2 = s2.toLowerCase().replaceAll("\\s","");
        method1(s1,s2);
        method2(s1,s2); 
        

    }
}
