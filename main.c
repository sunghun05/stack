#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static char str[100];
typedef Node Node;
struct Node {
	char ch[1];
	struct Node* next;
};
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
	printf("enter string : ");
	scanf("%s", &str);
	for (int i = 0; i < strlen(str); i++) {
		create()
	}
}
