#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ff(int,int,char);

static const int N = 10;


int minDouble(int a, int b) {
    int r;
    while(b!=0) {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int maxDevide(int a, int b) {
    int i=2,p=1;
    do {
        while(a%i==0 && b%i==0) {
            p*=i;
            a/=i;
            b/=i;
        }
        i++;
    } while(a>=i && b >= i);
    return p*a*b;
}

int ff(int x, int y, char op) {
    int z;
    printf("%d %c %d = ", x, op, y);
    scanf("%d", &z);
    switch(op) {
        case '+':
            return x+y==z;
        case '-':
            return x-y==z;
        case '*':
            return x*y==z;
        case '/':
            return x/y==z;
        default: {
            printf("ÔËËã·û´íÎó! \n");
            exit(1);
            break;
        }
    }
}

void calcNum(){
	int i, a, b, c = 0, d;
	char op;
	srand(time(0));
	for(i=0;i<N; i++){
		a=rand()%20 +1;
		b=rand()%20 +1;
		d=rand()%4;
		if(d==0) op='+';
		else if(d==1) op='-';
		else if(d==2) op='*';
		else op='/';
		if(ff(a,b,op)) c++;
	}
	printf("µÃ·Ö£º%d\n", c*10);
}


