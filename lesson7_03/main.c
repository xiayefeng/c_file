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
	printf("����ڵ���: ");
	do {
		printf("\n ���������Ҫ����0: ");
		scanf("%d", &n);
	} while(n<=0);
	head = createList(n);
	traversalList(head);
	n=countList(head, x);
	printf("�����д��� %d �Ľ����Ϊ: %d\n", x.data, n);

	head = insertList(head, 6, 44);
	printf("�ڵ�6�����ǰ����ֵΪ44�Ľڵ�󣬵�������ֵ�Ĵ���:\n");
	traversalList(head);

	return 0;
}
