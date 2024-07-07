#include <stdio.h>
#include <stdlib.h>

struct IntNode {
	int data;
	struct IntNode* next;
};

struct IntNode* createList(int n) {
	int i,x;
	struct IntNode *f, *p;
	if(n<0) {
		printf("n 的值无效!\n");
		exit(1);
	}
	if(n==0 ) {
		return NULL;
	}
	printf("从键盘上输入 %d 个整数:\n", n);
	scanf("%d", &x);
	f=malloc(sizeof(struct IntNode));

	f->data =x;
	f->next = NULL;
	if(n == 1) return f;
	p=f;
	for(i=1; i<n; i++) {
		scanf("%d", &x);
		p->next=malloc(sizeof(struct IntNode));

		p=p->next;
		p->data = x;
	}
	p->next = NULL;
	return f;
}

void traversalList(struct IntNode* f) {
	while(f) {
		printf("%d ", f->data);
		f=f->next;
	}
	printf("\n");
}

int countList(struct IntNode* f, struct IntNode x) {
	int c=0;
	while(f) {
		if(f->data > x.data) {
			c++;
		}
		f=f->next;
	}
	return c;
}

struct IntNode* insertList(struct IntNode* f, int i, int x) {
	struct IntNode *px, *h=f;
	int c=2;
	if(i<1) {
		printf("i的值%d要大于0!\n", i);
		exit(1);
	}
	px=malloc(sizeof(struct IntNode));
	px->data=x;
	px->next = NULL;
	if(i==1) {
		px->next = f; 
		return px;
	}
	while(h->next){
		if(i==c) break;
		
		h=h->next;
		c++;
	}
	px->next = h->next;
	h->next = px;
	return f;
}



