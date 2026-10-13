#include <iostream>
#include <string>
using namespace std;

class Stack {
    string pages[4];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(string page) {
        if (top == 3) {
            cout << "Stack is Full" << endl;
        } else {
            top++;
            pages[top] = page;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
        } else {
            cout << "Back from: " << pages[top] << endl;
            top--;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
        } else {
            cout << "Current TOP page: " << pages[top] << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "No pages in history" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << pages[i] << endl;
            }
        }
    }
};

int main() {
    Stack s;

    s.push("Google");
    s.push("YouTube");
    s.push("Facebook");
    s.push("GitHub");

    cout << "Browsing History (TOP to Bottom):" << endl;
    s.display();

    s.pop();

    s.peek();

    cout << "Remaining Browsing History:" << endl;
    s.display();

    return 0;
}
