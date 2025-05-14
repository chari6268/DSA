#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node {
    int data;
    struct Node* next;
};

extern struct Node* head;

struct Node* createNode(int data);
void append(int data);
void display();

#endif
