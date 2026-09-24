#include <iostream>
using namespace std;

struct node {
    int value;
    node *next;
};

node *head = NULL;

void push(int n) {
    node *newNode = new node;
    newNode->value = n;
    newNode->next = head;
    head = newNode;
    cout << n << " di-push ke Stack\n";
}

void pop() {
    if (head == NULL) {
        cout << "Stack kosong!\n";
        return;
    }
    node *temp = head;
    head = head->next;
    cout << temp->value << " di-pop dari Stack\n";
    delete temp;
}

void displayStack() {
    node *temp = head;
    cout << "Isi Stack (Top -> Bottom): ";
    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    cout << "--- IMPLEMENTASI STACK ---\n";
    push(10);
    push(20);
    push(30);
    displayStack();
    
    pop();
    displayStack();
    
    return 0;
}