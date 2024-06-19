#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char data[1];
    struct Node* next;
}Node;
void create(Node* head, Node* p, char a[1]) {
    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode->next = NULL;
    strcpy(newNode->data, a);

    if (head->next == NULL) {
        head->next - (struct Node*)newNode;
    }
    else {
        p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = newNode;
    }
}
void pop(Node* head, Node* p) {

}
void main() {
    char str[100];
    printf("enter string : ");
    scanf("%s", &str);

    Node* head = (Node*)malloc(sizeof(Node));
    Node* p = (Node*)malloc(sizeof(Node));
    strcpy(head->data, '\0');
    head->next = NULL;
    printf("go\n");
    for (int i = 0; i < strlen(str); i++) {
        printf("\n%c", (char *)str[i]);
        create(head, p, (char *) str[i]);
    }
}
