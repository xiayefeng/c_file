#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* f3(const char* x, const char* y) {
	char* p=malloc(strlen(x) + strlen(y) + 2);
	strcpy(p, x);
	strcat(p, " ");
	strcat(p, y);
	return p;
}

int f4(int a[][4], int m, int n) {
	int i,j, max=a[0][0];
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			if(a[i][j] > max) max = a[i][j];
		}
	}
	return max;
}

int wr(int* a, int n) {
	int i,p=1;
	for(i=0; i<n; i++) p*=*a++;
	return p;
}

int fun1(int n) {
	int i,p=1,s=0;
	for(i=1; i<=n; i++) {
		p*=i;
		s+=p;
	}
	return s;
}

void xk(unsigned int x) {
	char a[10];
	int i=0, rem;
	do {
		rem=x%16;
		x=x/16;
		if(rem <10) a[i] = 48+rem;
		else a[i] = 55 +rem;
		i++;
	} while(x!=0);
	while(i>0) printf("%c", a[--i]);
	printf("\n");
}

void fun2(int *a, int n) {
	int i,j, x;
	for(i=1; i<n; i++) {
		x=a[i];
		for(j=i-1; j>=0; j--) {
			if(x<a[j]) a[j+1] = a[j];
			else break;
		}
		a[j+1] =x;
	}
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

char* fun3(char* a, const char* b) {
	int i=0;
	while(*b) {
//		printf("%c ", *b);
		a[i] = *b++;
		i++;
	}
	a[i]=0;
	return a;
}

char* fun4(char* a, const char* b) {
	char *start = a;
	while(*b) {
		*a++ = *b++;
	}
	*a=0;
	return start;
}

int multiple(int a, int b, int k) {
	if(a>=k && b>=k) {
		if(a%k==0 && b%k==0) {
			return k * multiple(a/k, b/k, k);
		} else {
			return multiple(a, b, k+1);
		}
	} else {
		return a*b;
	}
}

int Contrary(unsigned int x) {
	static int y=0;
	if(x) {
		y=y*10+x%10;
		Contrary(x/10);
	}
	return y;
}

