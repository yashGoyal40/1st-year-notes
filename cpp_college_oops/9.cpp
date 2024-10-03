#include <iostream>

class TicketQueue {
private:
    int queue[5];
    int front;
    int rear;
    const int max_capacity = 5;

public:
    TicketQueue() {
        front = -1;
        rear = -1;
    }

    void insertTicket(int ticket) {
        if (rear == max_capacity - 1) {
            std::cout << "Queue is full." << std::endl;
        } else {
            if (front == -1) {
                front = 0;
            }
            rear++;
            queue[rear] = ticket;
            std::cout << ticket << " is inserted in the queue." << std::endl;
        }
    }

    void deleteTicket() {
        if (front == -1) {
            std::cout << "Queue is empty." << std::endl;
        } else {
            int deletedTicket = queue[front];
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front++;
            }
            std::cout << "Deleted number is: " << deletedTicket << std::endl;
        }
    }

    void displayTickets() {
        if (front == -1) {
            std::cout << "Queue is empty." << std::endl;
        } else {
            std::cout << "Elements in the queue are:";
            for (int i = front; i <= rear; i++) {
                std::cout << " " << queue[i];
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    TicketQueue queue;
    int option, element;

    while (std::cin >> option) {
        switch (option) {
            case 1:
                std::cin >> element;
                queue.insertTicket(element);
                break;
            case 2:
                queue.deleteTicket();
                break;
            case 3:
                queue.displayTickets();
                break;
            default:
                std::cout << "Invalid option." << std::endl;
                break;
        }
    }

    return 0;
}
