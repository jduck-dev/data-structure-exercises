#include "bst.h"

Node newNode(int element)
{
    Node root = (Node)malloc(sizeof(struct _node));
    root->element = element;
    root->left = NULL;
    root->right = NULL;
    return root;
}

Node addNode(Node node, int element)
{
    if (node == NULL)
    {
        node = newNode(element);
        return node;
    }
    if (node->element > element)
    {
        if (node->left == NULL)
            node->left = addNode(node->left, element);
        else
            addNode(node->left, element);
    }
    else
    {
        if (node->right == NULL)
            node->right = addNode(node->right, element);
        else
            addNode(node->right, element);
    }
}

void preorderPrint(Node node)
{
    if (node != NULL)
    {
        printf("[%d] ", node->element);
        preorderPrint(node->left);
        preorderPrint(node->right);
    }
}

int height(Node tree)
{
    if (tree == NULL)
        return 0;
    return 1 + max(height(tree->left), height(tree->right));
}

int max(int n0, int n1)
{
    return n0 > n1 ? n0 : n1;
}

int isBalanced(Node tree)
{
    if (tree == NULL)
        return 1;

    int leftLeaf = height(tree->left);
    int rightLeaf = height(tree->right);
    int difference = leftLeaf > rightLeaf ? leftLeaf - rightLeaf : rightLeaf - leftLeaf;

    if (difference <= 1 && isBalanced(tree->left) && isBalanced(tree->right))
        return 1;

    return 0;
}

void bstExample()
{
    Node tree = newNode(10);
    addNode(tree, 9);
    addNode(tree, 11);
    addNode(tree, 5);
    addNode(tree, 4);

    preorderPrint(tree);
    printf("\n");
    printf("The tree\'s height is: %d\n", height(tree));
    printf("Is the tree balanced %d\n", isBalanced(tree));
}