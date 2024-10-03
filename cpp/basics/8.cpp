struct Node {
    int data;
    Node* next;
    Node* prev;
};

main() {
    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 0; i < 5; i++) {
        Node* temp = new Node;
        temp->data = i+1;
        temp->prev = tail;
        temp->next = NULL;
        if (tail != NULL) {
            tail->next = temp;
        } else {
            head = temp;
        }
        tail = temp;
    }
    Node* current = head;
    while (current != NULL) {
        cout<<current->data; //prints the values
        current = current->next;
    }
}