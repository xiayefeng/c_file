#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
    float score;
    printf("请输入一个人的成绩（0-100）:");
    scanf("%f", &score);
    if(score<0 || score > 100) {
        printf("输入数据有误!\n");
        exit(1);
    }
    switch((int)score / 10) {
        case 9:
        case 10: printf("%4.f: 优\n", score); break;
        case 8: printf("%4.f: 良\n", score); break;
        case 7: printf("%4.f: 中\n", score); break;
        case 6: printf("%4.f: 及格\n", score); break;
        default: printf("%4.f: 不及格\n", score); break;
    }

}
