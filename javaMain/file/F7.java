import java.io.*;

class Student implements Serializable {
    private String name;
    private int age;
    private String id;

    public Student(String name, int age, String id) {
        this.name = name;
        this.age = age;
        this.id = id;
    }

    // Getters and setters
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getId() {
        return id;
    }
}

public class F7 {
    public static void main(String[] args) {
        // Create an object to serialize
        Student student1 = new Student("John", 20, "123456");

        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("student.ser"))) {
            // Write the object to file
            oos.writeObject(student1);
            System.out.println("Object has been serialized");
        } catch (IOException e) {
            e.printStackTrace();
        }
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream("student.ser"))) {
            // Read the object from file
            Student student = (Student) ois.readObject();
            System.out.println("Object has been deserialized");
            System.out.println("Name: " + student.getName());
            System.out.println("Age: " + student.getAge());
            System.out.println("ID: " + student.getId());
        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}
