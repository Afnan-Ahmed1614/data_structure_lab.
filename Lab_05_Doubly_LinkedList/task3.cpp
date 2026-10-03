#include <iostream>
#include <string>
using namespace std;
class Node {
public:
    string name;
    Node* next;
};
int main() {
    Node* p1 = new Node();
    Node* p2 = new Node();
    Node* p3 = new Node();
    Node* p4 = new Node();
    Node* p5 = new Node();
    p1->name = "Ali";
    p2->name = "Saad";
    p3->name = "Hamza";
    p4->name = "Bilal";
    p5->name = "Zain";
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = p5;
    p5->next = p1;
    cout << "Turns:\n";
    Node* cur = p1;
    do {
        cout << cur->name << " turn\n";
        cur = cur->next;
    } while(cur != p1);
    cout << "Next turn goes back to: " << cur->name << "\n";
    return 0;
}