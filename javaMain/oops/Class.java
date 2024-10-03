
class Student{
    private int id;
    public String name;

    public void setId(int id){
        this.id = id;
    }

    public int getId(){
        return id;
    }

}
public class Class {
    public static void main(String[] args) {
        Student s = new Student();
        s.setId(1);
        s.name = "yash";
        System.out.println(s.getId());
        System.out.println(s.name);  
        
    }
}

