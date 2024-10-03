#include <iostream>

class MyClass {
public:
  int x;
  MyClass() {
    x = 0;
    std::cout << "Default constructor called!" << std::endl;
  }
  ~MyClass() {
    std::cout << "Destructor called!" << std::endl;
  }
};

int main() {
  MyClass obj;
  obj.x = 5;
  std::cout << obj.x << std::endl;
  return 0;
}