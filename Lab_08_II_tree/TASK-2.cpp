
#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string category;
    Node* left;
    Node* right;

    Node(string val) {
        category = val;
        left = nullptr;
        right = nullptr;
    }
};

int height(Node* root) {
    if (root == nullptr)
        return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return 1 + max(leftHeight, rightHeight);
}

void printLevel(Node* root, int level) {
    if (root == nullptr)
        return;

    if (level == 1) {
        cout << "[" << root->category << "] ";
    }
    else {
        printLevel(root->left, level - 1);
        printLevel(root->right, level - 1);
    }
}

void bfsTraversal(Node* root) {
    int h = height(root);

    cout << "BFS Traversal:\n";

    for (int i = 1; i <= h; i++) {
        printLevel(root, i);
    }

    cout << endl;
}

int main() {
    Node* root = new Node("Electronics");

    root->left = new Node("Mobiles");
    root->right = new Node("Clothing");

    root->left->left = new Node("Laptops");
    root->left->right = new Node("Accessories");

    root->right->left = new Node("Men");
    root->right->right = new Node("Women");

    bfsTraversal(root);

    return 0;
}
