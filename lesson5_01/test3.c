#include <stdio.h>

void printList() {
	int a[5];
	int i,s=0;
	printf("������5����:\n");
	for(i=0; i<5; i++) scanf("%d", &a[i]);

	for(i=0; i<5; i++) {
		s+=a[i];
		printf("%d ", a[i]);
	}
	printf("\n%d\n", s);
	s=0;
	for(i=0; i<5; i++) {
		s+=*(a+i);
		printf("%d ", *(a+i));
	}
	printf("\n%d\n", s);
}
