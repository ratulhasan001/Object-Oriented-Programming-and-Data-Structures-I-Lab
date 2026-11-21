#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void insert(Node *&root, int x) {
    if (root == NULL) {
        root = new Node(x);
        return;
    }
    if (x < root->val) {
        if (root->left == NULL) root->left = new Node(x);
        else insert(root->left, x);
    }
    else {
        if (root->right == NULL) root->right = new Node(x);
        else insert(root->right, x);
    }
}
void inorder(Node *root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
int main() {
    Node *root = NULL;
    insert(root, 13);
    insert(root, 32);
    insert(root, 27);
    insert(root, 22);
    inorder(root);
    return 0;
}