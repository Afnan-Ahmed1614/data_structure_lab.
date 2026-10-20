#include <iostream>
#include <string>
using namespace std;

#define MAX 5

class Queue {
    string id[MAX];
    int priority[MAX];
    int size;

public:
    Queue() {
        size = 0;
    }

    void enqueue(string x, int p) {
        if (size == MAX) {
            cout << "Queue is full!" << endl;
            return;
        }

        id[size] = x;
        priority[size] = p;
        size++;

        cout << x << " inserted" << endl;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return;
        }

        int pos = 0;

        for (int i = 1; i < size; i++) {
            if (priority[i] < priority[pos])
                pos = i;
        }

        cout << id[pos] << " treated" << endl;

        for (int i = pos; i < size - 1; i++) {
            id[i] = id[i + 1];
            priority[i] = priority[i + 1];
        }

        size--;
    }

    void display() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return;
        }

        for (int i = 0; i < size; i++)
            cout << id[i] << " Priority: " << priority[i] << endl;
    }
};

int main() {
    Queue q;

    q.enqueue("P101", 3);
    q.enqueue("P102", 1);
    q.enqueue("P103", 2);
    q.enqueue("P104", 4);

    cout << "Waiting patients:" << endl;
    q.display();

    q.dequeue();

    cout << "Remaining patients:" << endl;
    q.display();

    return 0;
}
