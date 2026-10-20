#include <iostream>
using namespace std;

#define MAX 5

class Deque {
    int arr[MAX];
    int front, rear, count;

public:
    Deque() {
        front = -1;
        rear = -1;
        count = 0;
    }

    void insertFront(int x) {
        if (count == MAX) {
            cout << "Deque is full!" << endl;
            return;
        }

        if (count == 0) {
            front = 0;
            rear = 0;
        } else {
            front = (front - 1 + MAX) % MAX;
        }

        arr[front] = x;
        count++;

        cout << x << " inserted at front" << endl;
    }

    void insertRear(int x) {
        if (count == MAX) {
            cout << "Deque is full!" << endl;
            return;
        }

        if (count == 0) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % MAX;
        }

        arr[rear] = x;
        count++;

        cout << x << " inserted at rear" << endl;
    }

    void deleteFront() {
        if (count == 0) {
            cout << "Deque is empty!" << endl;
            return;
        }

        cout << arr[front] << " removed from front" << endl;

        if (count == 1) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX;
        }

        count--;
    }

    void deleteRear() {
        if (count == 0) {
            cout << "Deque is empty!" << endl;
            return;
        }

        cout << arr[rear] << " removed from rear" << endl;

        if (count == 1) {
            front = -1;
            rear = -1;
        } else {
            rear = (rear - 1 + MAX) % MAX;
        }

        count--;
    }

    void display() {
        if (count == 0) {
            cout << "Deque is empty!" << endl;
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
    Deque d;

    d.insertRear(301);
    d.insertRear(302);
    d.insertFront(300);

    cout << "Passenger requests: ";
    d.display();

    d.deleteFront();
    d.deleteRear();

    cout << "Remaining requests: ";
    d.display();

    return 0;
}
