#include <stdio.h>
#include <stdlib.h>

struct IntNode {
	int data;
	struct IntNode* next;
};

struct IntNode* createList(int n);
void traversalList(struct IntNode* f);
int countList(struct IntNode* f, struct IntNode x);
struct IntNode* insertList(struct IntNode* f, int i, int x);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct IntNode *head,x= {30,NULL
	};
	int n;
	printf("输入节点数: ");
	do {
		printf("\n 输入的整数要大于0: ");
		scanf("%d", &n);
	} while(n<=0);
	head = createList(n);
	traversalList(head);
	n=countList(head, x);
	printf("链表中大于 %d 的结点数为: %d\n", x.data, n);

	head = insertList(head, 6, 44);
	printf("在第6个结点前插入值为44的节点后，单链表中值的次序:\n");
	traversalList(head);

	return 0;
}
