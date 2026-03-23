#include "Node.h"

int main() {
    // first node in our linked list
    Node* head = new Node(10);

    // second node
    head->next = new Node(20);

    // third node
    head->next->next = new Node(30);

    // Rememder after we need to clean up memory in stack
    delete head->next->next;
    delete head->next;
    delete head;
}
