#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string data;
    Node* next;

    Node(string value) {
        data = value;
        next = NULL;
    }
};

class Stack {
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(string value) {
        Node* n = new Node(value);
        n->next = top;
        top = n;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is Empty" << endl;
        } else {
            Node* temp = top;
            cout << "Processed Order: " << top->data << endl;
            top = top->next;
            delete temp;
        }
    }

    void peek() {
        if (top == NULL) {
            cout << "Stack is Empty" << endl;
        } else {
            cout << "Current TOP order: " << top->data << endl;
        }
    }

    void display() {
        if (top == NULL) {
            cout << "No orders remaining" << endl;
        } else {
            Node* temp = top;

            while (temp != NULL) {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
    }

    bool isEmpty() {
        return top == NULL;
    }

    ~Stack() {
        while (top != NULL) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main() {
    Stack s;

    s.push("ORD-101");
    s.push("ORD-102");
    s.push("ORD-103");
    s.push("ORD-104");

    cout << "Orders (TOP to Bottom):" << endl;
    s.display();

    s.pop();
    s.pop();

    s.peek();

    cout << "Remaining Orders:" << endl;
    s.display();

    if (s.isEmpty()) {
        cout << "Stack is Empty" << endl;
    } else {
        cout << "Stack is Not Empty" << endl;
    }

    return 0;
}
