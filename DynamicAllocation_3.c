#include <Stdio.h>
#include <Stdlib.h>

typedef struct node
{
	int data;
	struct node *link;
}Node;

Node* node_malloc(int num)
{
	Node *p;
	p = (Node *)malloc(sizeof(Node));
	p->data = num;
	p->link = NULL;
	return p;
}

Node* node_Delete(Node *head, int data) {
	Node *p = head, *pp;
	while (p && p->data != data) {
		pp = p;
		p = p->link;
	}
	if (p == NULL)
		puts("자료가 없습니다.");
	else if (p == head) {
		head = p->link;
		free(p);
	}
	else {
		pp->link = p->link;
		free(p);
	}
	return head;
}

void node_Print(Node *p) {
	puts("=================================");
	for (; p; p = p->link)
		printf("%d\t", p->data);
}

int main(void)
{
	Node *p, *head;
	for (int i = 1; i < 6; i++) {
		if (i == 1) {
			head = p = node_malloc(10);
		}
		else {
			p->link = node_malloc(10 * i);
			p = p->link;
		}
	}
	
	node_Print(head);
	printf("\n");
	head = node_Delete(head, 10);
	head = node_Delete(head, 30);
	
	node_Print(head);
}