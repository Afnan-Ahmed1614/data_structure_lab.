#include <iostream>
using namespace std;

#define MAX 5

class Queue {
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear == MAX - 1) {
            cout << "Queue is full!" << endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear++;
        arr[rear] = x;
        cout << x << " inserted" << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << arr[front] << " served" << endl;
        front++;

        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty!" << endl;
            return;
        }

        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";

        cout << endl;
    }

    void count() {
        if (front == -1)
            cout << "Waiting customers: 0" << endl;
        else
            cout << "Waiting customers: " << rear - front + 1 << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(101);
    q.enqueue(102);
    q.enqueue(103);

    cout << "Waiting customers: ";
    q.display();

    q.count();

    q.dequeue();

    cout << "Remaining customers: ";
    q.display();

    q.count();

    return 0;
}
