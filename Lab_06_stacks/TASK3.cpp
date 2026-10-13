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
            cout << "Handled Patient: " << top->data << endl;
            top = top->next;
            delete temp;
        }
    }

    void peek() {
        if (top == NULL) {
            cout << "Stack is Empty" << endl;
        } else {
            cout << "Current TOP request: " << top->data << endl;
        }
    }

    void display() {
        if (top == NULL) {
            cout << "No requests remaining" << endl;
        } else {
            Node* temp = top;

            while (temp != NULL) {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
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

    s.push("P101");
    s.push("P102");
    s.push("P103");
    s.push("P104");

    cout << "Patient Requests (TOP to Bottom):" << endl;
    s.display();

    s.pop();

    s.peek();

    cout << "Remaining Patient Requests:" << endl;
    s.display();

    return 0;
}
