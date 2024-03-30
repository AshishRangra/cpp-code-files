#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Function to insert a node into the binary tree
Node *insert(Node *&root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to display the binary tree using inorder traversal
void display(Node *root)
{
    if (root != NULL)
    {
        display(root->left);
        cout << root->data << " ";
        display(root->right);
    }
}

int main()
{
    Node *root = new Node(1);

    insert(root, 12);
    insert(root, 15);
    insert(root, 199);
    insert(root, 2);

    cout << "Inorder Traversal: ";
    display(root);
    cout << endl;

    return 0;
}

// #include <iostream>

// using namespace std;

// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data) {
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// // Function to insert a node into the binary tree
// void insert(Node*& root, int data) {
//     if (root == NULL) {
//         root = new Node(data);
//         return;
//     }
//     if (data < root->data) {
//         insert(root->left, data);  // Changed to insert recursively
//     } else {
//         insert(root->right, data); // Changed to insert recursively
//     }
// }

// // Function to display the binary tree using inorder traversal
// void display(Node* root) {
//     if (root != NULL) {
//         display(root->left);
//         cout << root->data << " ";
//         display(root->right);
//     }
// }

// int main() {
//     Node* root = new Node(1);
//     // Node* left = root;  // Not needed
//     // Node* right = root; // Not needed

//     insert(root, 2);
//     insert(root, 32);

//     display(root);
//     return 0;
// }
