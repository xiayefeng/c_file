#include <stdio.h>
void getNumAssic() {
    int x;
    printf("����һ��������:");
    do scanf("%d", &x);
    while(x<=0);
    while(x) {
        int k = x%10;
        printf("%c", k+48);
        x/=10;
    }
    printf("\n");
}
