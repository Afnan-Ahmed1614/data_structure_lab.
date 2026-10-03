#include <iostream>
#include <string>
using namespace std;
class Node {
public:
    string song;
    Node* next;
};
int main() {
    Node* s1 = new Node();
    Node* s2 = new Node();
    Node* s3 = new Node();
    Node* s4 = new Node();
    Node* s5 = new Node();
    s1->song = "Song A";
    s2->song = "Song B";
    s3->song = "Song C";
    s4->song = "Song D";
    s5->song = "Song E";
    s1->next = s2;
    s2->next = s3;
    s3->next = s4;
    s4->next = s5;
    s5->next = s1;
    cout << "Play once:\n";
    Node* cur = s1;
    do {
        cout << cur->song << " | ";
        cur = cur->next;
    } while(cur != s1);
    cout << "\n\n2 Full Rounds:\n";
    cur = s1;
    int c = 0;
    while(c < 10) {
        cout << "Playing: " << cur->song << "\n";
        cur = cur->next;
        c++;
    }
    return 0;
}