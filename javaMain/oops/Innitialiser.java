class Student{
    int id;
    String name;

    static{
        boolean isStudent = true;
    }

    Student(int id,String name){
        this.id = id;
        this.name=name;
    }

}
public class Innitialiser {
    public static void main(String[] args) {
        Student s = new Student(1, "yash");
        // if(s.isStudent){
            // System.out.println(s.name+ " is a student");
        // }
    }
}
