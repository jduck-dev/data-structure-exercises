#ifndef __BST_H__
#define __BST_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct _node *Node;

struct _node
{
    int element;
    Node left;
    Node right;
};

Node newNode(int);
Node addNode(Node, int);
void preorderPrint(Node);
int max (int, int);
int height(Node);
int isBalanced(Node tree);
void bstExample();

#endif
