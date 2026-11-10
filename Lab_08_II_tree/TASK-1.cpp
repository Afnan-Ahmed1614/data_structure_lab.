#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string name;
    Node* left;
    Node* right;

    Node(string val) {
        name = val;
        left = nullptr;
        right = nullptr;
    }
};

void displayHierarchy(Node* root) {
    if (root == nullptr) return;

    cout << "Member: " << root->name << endl;
    cout << "  Left Child: " << (root->left ? root->left->name : "None") << endl;
    cout << "  Right Child: " << (root->right ? root->right->name : "None") << endl;
    displayHierarchy(root->left);
    displayHierarchy(root->right);
}

int main() {
    Node* root = new Node("HOD Asif");
    root->left = new Node("Coord CS");
    root->right = new Node("Coord SE");

    root->left->left = new Node("Dr. Alina");
    root->left->right = new Node("Dr. Ahmed");

    root->right->left = new Node("Prof. Annas");
    root->right->right = new Node("Prof. Abuzar");

    displayHierarchy(root);

    return 0;
}