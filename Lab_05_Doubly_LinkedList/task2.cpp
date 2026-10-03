#include <iostream>
#include <string>
using namespace std;
class Node {
public:
    string img;
    Node* prev;
    Node* next;
};
int main() {
    Node* a = new Node();
    Node* b = new Node();
    Node* c = new Node();
    Node* d = new Node();
    Node* e = new Node();
    a->img = "pic1.png";
    b->img = "pic2.png";
    c->img = "pic3.png";
    d->img = "pic4.png";
    e->img = "pic5.png";
    a->prev = NULL;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;
    d->next = e;
    e->prev = d;
    e->next = NULL;
    cout << "Gallery Forward:\n";
    Node* temp = a;
    while(temp != NULL) {
        cout << temp->img << " ";
        temp = temp->next;
    }
    cout << "\nGallery Backward:\n";
    temp = e;
    while(temp != NULL) {
        cout << temp->img << " ";
        temp = temp->prev;
    }
    cout << "\n";
    return 0;
}