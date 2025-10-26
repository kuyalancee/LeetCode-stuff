#include "LinkedList.h"
#include <iostream>



//linked list constructor
LinkedList::LinkedList() : head(nullptr) {};

//linked list deconstructor
LinkedList::~LinkedList(){
    Node* curr = head;
    while(curr != nullptr){
        Node* temp = curr;
        curr = curr->next;
        delete temp;
    }
}

//insert function
void LinkedList::insert(int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

//search function
bool LinkedList::search(int data){
    Node* curr = head;
    while(curr != nullptr){
        if(curr->data == data){
            return true;
        }
        curr = curr->next;
    }
    return false;
}

//print function
void LinkedList::print(){
    Node* curr = head;
    std::cout << "Data in the LinkedList: ";
    while(curr != nullptr){
        std::cout << curr->data <<", ";
        curr = curr->next;
    }
    std::cout << std::endl;
}