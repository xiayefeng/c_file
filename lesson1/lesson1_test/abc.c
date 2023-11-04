#include <stdio.h>
#include "example.h"

void main()
{
  int a,b,c;
  printf("请输入三个数：");
  scanf("%d %d %d", &a, &b, &c);
  printf("求和：%d\n", Sum(a,b,c));
  printf("乘积：%d\n", Product(a,b,c));
}