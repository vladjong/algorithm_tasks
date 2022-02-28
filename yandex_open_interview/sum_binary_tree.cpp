/*
На вход подается бинарное дерево;
Нужно вычислить сумму всех конечных листов;

Пример:
                    4
                |           |
                2          5
            |        |     |
            1       3      7
                          |   |
                          6    8
----------------------------------
18
*/

#include <iostream>

struct Node {
    int value;
    Node *left;
    Node *right;
};

void sum(Node *root, int &result);
int sum_result(Node *root);
void print(Node *tree);
Node *push(int a, Node *node);

int main() {
    Node *node = nullptr;
    node = push(4, node);
    node = push(2, node);
    node = push(1, node);
    node = push(3, node);
    node = push(5, node);
    node = push(7, node);
    node = push(6, node);
    node = push(8, node);
    int number = sum_result(node);
    std::cout << number;
}

Node *push(int a, Node *node) {
    if (node == nullptr) {
        node = new Node;
        node->value = a;
        node->left = nullptr;
        node->right = nullptr;
    } else if (a < node->value) {
        node->left = push(a, node->left);
    } else {
        node->right = push(a, node->right);
    }
    return node;
}

void sum(Node *root, int &result) {
    if (root == nullptr) {
        return;
    }
    if (!root->left && !root->right) {
        result += root->value;
    }
    sum(root->left, result);
    sum(root->right, result);
}

int sum_result(Node *root) {
    int result = 0;
    sum(root, result);
    return result;
}
