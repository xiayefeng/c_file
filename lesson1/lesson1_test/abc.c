#include <stdio.h>
#include "example.h"

void main()
{
  int a,b,c;
  printf("��������������");
  scanf("%d %d %d", &a, &b, &c);
  printf("��ͣ�%d\n", Sum(a,b,c));
  printf("�˻���%d\n", Product(a,b,c));
}