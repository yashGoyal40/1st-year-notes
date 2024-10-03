#include <iostream>
#include <fstream>

class Person {
    std::string name;
    int age;

public:
    void setName(std::string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void saveToFile() {
        std::ofstream outfile("person.txt");
        outfile << name << std::endl;
        outfile << age << std::endl;
        outfile.close();
    }
};

int main() {
    Person person;
    person.setName("John");
    person.setAge(25);
    person.saveToFile();
    return 0;
}