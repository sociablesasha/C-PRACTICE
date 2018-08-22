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
	
	for (p = head; p != NULL; p = p->link)
		printf("%d\t", p->data);
}