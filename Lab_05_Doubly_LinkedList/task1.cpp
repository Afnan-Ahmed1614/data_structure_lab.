#include <iostream>
#include <string>
using namespace std;
class Node {
public:
    string url;
    Node* prev;
    Node* next;
};
int main() {
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();
    Node* n4 = new Node();
    Node* n5 = new Node();
    n1->url = "google.com";
    n2->url = "youtube.com";
    n3->url = "github.com";
    n4->url = "chatgpt.com";
    n5->url = "reddit.com";
    n1->prev = NULL;
    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev = n2;
    n3->next = n4;
    n4->prev = n3;
    n4->next = n5;
    n5->prev = n4;
    n5->next = NULL;
    cout << "Forward:\n";
    Node* cur = n1;
    while(cur != NULL) {
        cout << cur->url << " -> ";
        cur = cur->next;
    }
    cout << "NULL\n";
    cout << "Backward:\n";
    cur = n5;
    while(cur != NULL) {
        cout << cur->url << " -> ";
        cur = cur->prev;
    }
    cout << "NULL\n";
    return 0;
}