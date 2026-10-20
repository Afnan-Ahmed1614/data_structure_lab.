#include <iostream>
using namespace std;

#define MAX 5

class Queue {
    int arr[MAX];
    int front, rear, count;

public:
    Queue() {
        front = -1;
        rear = -1;
        count = 0;
    }

    void enqueue(int x) {
        if (count == MAX) {
            cout << "Queue is full!" << endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear = (rear + 1) % MAX;
        arr[rear] = x;
        count++;

        cout << x << " inserted" << endl;
    }

    void dequeue() {
        if (count == 0) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << arr[front] << " transmitted" << endl;

        if (count == 1) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX;
        }

        count--;
    }

    void display() {
        if (count == 0) {
            cout << "Queue is empty!" << endl;
            return;
        }

        int i = front;

        for (int j = 0; j < count; j++) {
            cout << arr[i] << " ";
            i = (i + 1) % MAX;
        }

        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(201);
    q.enqueue(202);
    q.enqueue(203);
    q.enqueue(204);
    q.enqueue(205);

    cout << "Packets waiting: ";
    q.display();

    q.dequeue();
    q.dequeue();

    q.enqueue(206);
    q.enqueue(207);

    cout << "Packets after circular movement: ";
    q.display();

    return 0;
}
