#include <stdio.h>

// �����Լ�� 
void getBigDevice() {
    int a, b;
    printf("����������������:");
    scanf("%d %d", &a, &b);
    while(a <=0 || b<=0) {
        printf("��������:");
        scanf("%d %d", &a, &b);
    }
    while(b) {
        int r = a%b;
        a=b;
        b = r;
    }
    printf("%d\n", a);
}
