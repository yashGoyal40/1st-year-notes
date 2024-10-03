// Stack class.
#include<bits/stdc++.h>
using namespace std;
class Stack {
    
private:
    int* arr;  
    int capacity;  
    int topIndex;  
public:
    
    Stack(int capacity) {
        this->capacity = capacity;
        this->arr = new int[capacity];
        this->topIndex = -1;
    }

    
    void push(int num) {
        if (isFull()) {
            cout << "Stack is full" << endl;
            return;
        }
        arr[++topIndex] = num;
    }

    int pop() {
        if (isEmpty()) {
            return -1;
        }
        return arr[topIndex--];
    }

  
    int top() {
        if (isEmpty()) {
            return -1;
        }
        return arr[topIndex];
    }

  
    int isEmpty() {
        return topIndex == -1;
    }

    
    int isFull() {
    return topIndex == capacity-1;
    }
    
};
