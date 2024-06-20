```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char *data;
    struct Node* next;
}Node;
void create(Node* head, char a[2]) {
    Node* p = (Node*)malloc(sizeof(Node));
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = (char*)malloc((strlen(a)+1)*sizeof(char));
    
    newNode->next = NULL;
    strcpy(newNode->data, a);          //Node 의 data가 문자이기 때문에 strcpy 사용해야함

    if (head->next == NULL) {
        head->next = (struct Node*)newNode;
    }
    else {
        p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = newNode;
    }
}
void pop(Node* head) {
    Node* p = (Node*)malloc(sizeof(Node));
    Node* tmp = (Node*)malloc(sizeof(Node));
    p = head;
    tmp = head;
    while(p->next != NULL){
        p = p->next;
    }
    while(tmp->next != p){
        tmp = tmp->next;
    }
    printf("%c", *p->data);
    tmp->next = NULL;
    free(p->data);
    free(p->next);
    
    //free(p);
}
void search(Node * head){
    Node* p = (Node*)malloc(sizeof(Node));
    p = head;
    while (p->next != NULL) {
        
        p = p->next;
        printf("\n%c\n", *p->data);
    }
}
int main(void) {
    char *str = (char*)malloc(sizeof(char)*100);
    
    
    printf("enter string : ");
    
    scanf("%s", str);
    int j = 0;
    while(str[j] != '\0'){
        j++;
    }
    str = (char*)realloc(str, (sizeof(char) * j) + 1);
        if (str == NULL) {
            fprintf(stderr, "메모리 재할당 실패\n");
            exit(1);
        }

    
    Node* head = (Node*)malloc(sizeof(Node));
    
    
    head->next = NULL;
    
    while (*str != '\0'){
        create(head, str);
        str++;
    }
    //search(head, p);
    while(head->next != NULL){
        pop(head);
    }
    printf("\n");
    return 0;
}
```
