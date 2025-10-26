#pragma once
#include "Node.h"

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList();
    ~LinkedList();

    void insert(int data);
    bool search(int data);
    void print();
};