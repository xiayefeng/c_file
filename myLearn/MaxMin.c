#include <stdio.h>
#include "Declare.h"

void main()
{
  int a,b,c;
  printf("����a,b,c������ֵ:");
  scanf("%d %d %d", &a, &b, &c);
  printf("�����е����ֵΪ %d\n", max(a,b,c));
  printf("�����е���СֵΪ %d\n", min(a,b,c));
}