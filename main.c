#include <stdio.h>
#include <stdlib.h>
typedef struct Node Node;
struct Node {
    char data[1];
    struct Node* next;
};

Node create(Node* head, Node* p, char a[1]) {
    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode->data = a;
    newNode->next = NULL;

    if (head->next == NULL) {       //노드가 아예 없을때
        head->next = (struct Node*)newNode;
    }
    else {                        //노드가 하나라도 있을때
        p = head;       //순회하는 포인터가 첫번째 노드를 가리킴
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = newNode;
    }

}
int pop(Node* head, Node* p) {
    p = head;       //순회하는 포인터가 첫번째 노드를 가리킴
    while (p->next != NULL) {
        p = p->next;
        printf("\n%d\n", p->data);
    }
    return p->data;
}
void search(Node* head, Node* p) {
    p = head;       //순회하는 포인터가 첫번째 노드를 가리킴
    while (p->next != NULL) {
        p = p->next;
        printf("\n%d\n", p->data);
    }
}
void insert(Node* head, Node* p, int index, char data[1]) {
    p = head;
    for (int i = 0; i != index; i++) {
        p = p->next;

    }
    printf("\ninsert\n");
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* tmp = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    tmp = p->next;
    p->next = newNode;
    newNode->next = tmp;
}
void append(Node* head, Node* p, char data[1]) {
    p = head;       //순회하는 포인터가 첫번째 노드를 가리킴
    while (p->next != NULL) {
        p = p->next;
    }
    Node* newNode = (Node*)malloc(sizeof(Node));
    p->next = newNode;
    newNode->data = data;
    newNode->next = NULL;
}
void main(void) {
    Node* head = (Node*)malloc(sizeof(Node));
    Node* p = (Node*)malloc(sizeof(Node));
    head->data = 0;
    head->next = NULL;
    
    int cnt = 0;
    char *data;

    printf("enter a data(string) : ");
    scanf("%s", data)
    data = (char*)malloc(sizeof(data));

    printf("%s", *data);
    
}
