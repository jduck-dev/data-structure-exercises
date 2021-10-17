#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node* Node;
typedef struct _node* Header;

struct _node {
    int number;
    Node next;
};

Header createEmptyList();
Node createElement(int);
Header addElement(Header, Node);
Node nextElement(Node);
Node firstElement(Header);
int hasNextElement(Node);
int isEmpty(Header);
void printList(Header);

int main(int argc, char** argv) {
    Header header = createEmptyList();
    Node node1 = createElement(1);
    Node node2 = createElement(2);
    header = addElement(header, node1);
    header = addElement(header, node2);
    printList(header);
    return 0;
}

Header createEmptyList() {
    Header header = malloc(sizeof(Header));
    if(header == NULL) {
        fprintf(stderr, "Error on reserving memory for Node");
        exit(1);
    }
    header->next = NULL;
    return header;
}

Node createElement(int number) {
    Node node = malloc(sizeof(Node));
    if(node == NULL) {
        fprintf(stderr, "Error on reserving memory for Node");
        exit(1);
    }
    node->number = number;
    node->next = NULL;
    return node;
}

Header addElement(Header header, Node node) {
    if(isEmpty(header)) {
        header->next = node;
    } else {
        Node currentNode = header->next;
        while(hasNextElement(currentNode)) {
            currentNode = nextElement(node);
        }
        currentNode->next = node;
    }
    return header;
}

Node nextElement(Node node) {
    return node->next;
}

Node firstElement(Header header) {
    return header->next;
}

int hasNextElement(Node node) {
    return nextElement(node) != NULL;
}

int isEmpty(Header header) {
    return header->next == NULL;
}

void printList(Header header) {
    if(header->next == NULL) {
        printf("Empty list!\n");
    } else {
        Node currentNode = header->next;
        while(currentNode != NULL) {
            printf("Current node: %p Number: %d Next node: %p\n", currentNode, currentNode->number, currentNode->next);
            currentNode = nextElement(currentNode);
        }
    }
}