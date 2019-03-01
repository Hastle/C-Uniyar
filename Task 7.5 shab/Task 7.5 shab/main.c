#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data) {
    struct node* node = (struct node*)
    malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    
    return(node);
}
struct node* add(struct node* node, int data) {
    if (node == NULL)
        return(newNode(data));
    else {
        if (data <= node->data)
            node->left = add(node->left, data);
        else
            node->right = add(node->right, data);
        return node;
    }
}

int maxValue(struct node* node) {
    struct node* current = node;
    
    while (current->right != NULL) {
        current = current->right;
    }
    return(current->data);
}

int main() {
    struct node* root = NULL;
    int inf=0;
    printf("Введите элементы дерева: ");
    while (scanf("%d", &inf) != 0)
        root = add(root, inf);
    printf("Максимальное значение: %d\n\n", maxValue(root));
    return 0;
}
