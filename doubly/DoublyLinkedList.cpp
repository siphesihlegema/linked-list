#include "Node.h"
#include <iostream>

int main() {
    // first lets create our node objects with are stored in the heap
    Node* head = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);

    // now we do foward pointer 
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = nullptr;

    // Now we do backward pointers
    head->prev = nullptr;
    node2->prev = head;
    node3->prev = node2;
    node4->prev = node3;

    // Now lets trasver our linked list
    Node* current = head; //first node
    while(current != nullptr) {
        std::cout << current->data << " ";
        current = current->next; //move to the pointer of next node
    }
    
    // backward transvers
    Node* current2 = node4;      // last node
    while (current2 != nullptr) {
        std::cout << current2->data << " ";
        current2 = current2->prev;  // Jump backward via prev
    }
}

