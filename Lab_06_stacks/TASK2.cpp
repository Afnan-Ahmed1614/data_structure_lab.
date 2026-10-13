#include <iostream>
#include <string>
using namespace std;

class Stack {
    string actions[4];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(string action) {
        if (top == 3) {
            cout << "Stack is Full" << endl;
        } else {
            top++;
            actions[top] = action;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
        } else {
            cout << "Undo: " << actions[top] << endl;
            top--;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
        } else {
            cout << "Current TOP action: " << actions[top] << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "No actions remaining" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << actions[i] << endl;
            }
        }
    }
};

int main() {
    Stack s;

    s.push("Type Hello");
    s.push("Type World");
    s.push("Add !");
    s.push("Delete !");

    cout << "Actions (TOP to Bottom):" << endl;
    s.display();

    s.pop();
    s.pop();

    s.peek();

    cout << "Remaining Actions:" << endl;
    s.display();

    return 0;
}
