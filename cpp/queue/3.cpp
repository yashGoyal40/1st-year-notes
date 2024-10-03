#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int d) : data(d), next(nullptr) {}
};

class Queue {
private:
    Node* frontNode;
    Node* backNode;

public:
    Queue() : frontNode(nullptr), backNode(nullptr) {}

    bool isempty() {
        return frontNode == nullptr;
    }

    void pushele(int n) {
        Node* newNode = new Node(n);

        if (isempty()) {
            frontNode = newNode;
            backNode = newNode;
        } else {
            backNode->next = newNode;
            backNode = newNode;
        }
    }

    void pop() { // Renamed from popele
        if (isempty()) {
            throw std::runtime_error("underflow");
        } else {
            Node* temp = frontNode;
            frontNode = frontNode->next;
            delete temp;

            if (frontNode == nullptr) {
                backNode = nullptr; // Update backNode when the queue becomes empty
            }
        }
    }

    int getfront() {
        if (isempty()) {
            throw std::runtime_error("queue is empty");
        } else {
            return frontNode->data;
        }
    }

    int getback() {
        if (isempty()) {
            throw std::runtime_error("queue is empty");
        } else {
            return backNode->data;
        }
    }
};

int main() {
    Queue q;
    q.pushele(1);
    q.pushele(2);
    q.pushele(3);
    q.pushele(4);
    std::cout << q.getfront();
    q.pop();
    std::cout << q.getfront();

    return 0;
}
