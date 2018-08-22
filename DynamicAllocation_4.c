#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int num;
	struct node *link;
}Node;

Node* node_Insert(int num) {
	Node *p;
	p = (Node *)malloc(sizeof(Node));
	p->num = num;
	p->link = NULL;
	return p;
}

Node* node_Delete(Node *head, int num) {
	Node *p = head, *pp;
	while (p && p->num != num) {
		pp = p;
		p = p->link;
	}
	if (p == NULL) {
		puts("자료가 없습니다.");
	}
	else if (p == head) {
		head = head->link;
		free(p);
	}
	else {
		pp->link = p->link;
		free(p);
	}
	return head;
}

void node_Print(Node *p) {
	puts("============================");
	for (; p; p = p->link)
		printf("%d\t", p->num);
	puts("\n============================");
}

menu() {
	puts("1. 정수 입력\n");
	puts("2. 정수 삭제\n");
	puts("3. 모든 데이터 출력\n");
	puts("4. 프로그램 종료\n");
	puts("============================");
}

int main(void)
{
	int choice, num;
	Node *head = NULL, *p;
	int Continue = 1;

	while (Continue) {
		menu();
		scanf("%d", &choice);
		printf("\n");
		switch (choice){
		case 1:
			scanf("%d", &num);
			if (head == NULL)
				head = p = node_Insert(num);
			else {
				p->link = node_Insert(num);
				p = p->link;
			}
			break;
		case 2: 
			scanf("%d", &num);
			head = node_Delete(head, num);
			break;
		case 3:
			
			node_Print(head);
			break;
		case 4: 
			return 0;
		default: 
			printf("다시 입력하시오.\n");
		}
	}
}