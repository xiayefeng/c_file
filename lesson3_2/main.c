#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
    float score;
    printf("������һ���˵ĳɼ���0-100��:");
    scanf("%f", &score);
    if(score<0 || score > 100) {
        printf("������������!\n");
        exit(1);
    }
    switch((int)score / 10) {
        case 9:
        case 10: printf("%4.f: ��\n", score); break;
        case 8: printf("%4.f: ��\n", score); break;
        case 7: printf("%4.f: ��\n", score); break;
        case 6: printf("%4.f: ����\n", score); break;
        default: printf("%4.f: ������\n", score); break;
    }

}
