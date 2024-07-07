#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct CCC {
	char *a;
	int n;
};

struct Worker {
	char name[15];
	int age;
	int pay;
};

struct Person {
	char name[15];
	char sex;
	int age;
	int pay;
};

struct intNode {
	int data;
	struct intNode* next;
};

struct Person* searchAge(struct Person a[], int n, int x);

void copyStr() {
	struct CCC x;
	char* p="PersonalComputer";
	x.n=strlen(p) + 1;
	x.a= malloc(x.n);
	strcpy(x.a, p);
	printf("%d %s\n", x.n-1, x.a);
	printf("%d %s\n", x.n - 1 - 8 , x.a +8);
	free(x.a);
}

void copyStruct() {
	struct Worker x, *p=&x;
	strcpy(x.name, "weirong");
	x.age = 58;
	x.pay = 6600;
	x.age+= 10;
	x.pay+= 1200;
	printf("%d %d\n", p->age, x.pay);
}

int xh2(struct Worker a[], int n) {
	int i, s=0;
	for(i=0; i<n; i++) {
		s+=a[i].pay;
	}
	return s;
}

void printWorkerPay() {
	struct Worker a[4] = {
		{
			"abc", 25, 1400
		},
		{
			"defa", 58, 1600
		},
		{
			"ghin", 49, 1500
		},
		{
			"jklt", 36, 1300
		}
	};
	printf("%d\n", xh2(a, 4));
}

int Count(struct Person a[], int n) {
	int i, c=0;
	for(i=0; i<n; i++) {
		if(a[i].sex == 'm') c++;
	}
	return c;
}

struct Person* MaxWages(struct Person a[], int n) {
	int i, k=0;
	float x=0;
	for(i=0; i<n; i++) {
		if(a[i].pay>x) {
			x=a[i].pay;
			k=i;
		}
	}
	return a+k;
}

void printMaxAgeName() {
	struct Person *p;
	struct Person a[] = {
		{
			"lilei", 'm', 15, 10
		},
		{
			"libai", 'm', 35, 2000
		},
		{
			"zhanghua", 'f', 25, 1080
		}
	};
	p=MaxWages(a, 3);
	printf("%-10s%-10c%-10d%-10d\n", p->name, p->sex, p->age, p-> pay);
	searchAge(a, 3, 20);

}

int xb3(struct intNode *f) {
	int x=0;
	while(f!= NULL) {
		if(f->data > x) x=f->data;
		f= f->next;
	}
	return x;
}

struct intNode* deleteList(struct intNode* f, int i) {
	struct intNode *h = f;
	int c=2;
	if(f== NULL || i<1) {
		printf("单链表为空或i值非法，无法删除节点!\n");
		exit(1);
	}
	if(i==1) return f->next;
	while(h->next) {
		if(i==c) break;
		h=h->next;
		c++;
	}
	if(h->next==NULL) {
		printf("i的值%d太大,删除失败退出!\n", i);
		exit(1);
	}
	h->next= h->next->next;
	return f;
}

struct Person* searchAge(struct Person a[], int n, int x) {
	int i;
	for(i=0; i<n; i++) {
		if(a[i].age >= x) {
			printf("%-10s%-10c%-10d%-10d\n", a[i].name, a[i].sex, a[i].age, a[i].pay);
		}
	}
}

struct Person* searchName(struct Person a[], int n, char* sName){
	int i;
	for(i=0; i<n;i++){
		if(strcmp(a[i].name, sName)) {
			return &a[i];
		}
	}
	return NULL;
}



