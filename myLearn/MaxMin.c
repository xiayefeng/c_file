#include <stdio.h>
#include "Declare.h"

void main()
{
  char ch='E';
  int x= ch +2;
  int a,b,c;

  if (ch > 'C') {
    printf("%c %c %c\n", ch, '>', 'C');
  }
  printf("apple\n");
  
  printf("����a,b,c������ֵ:");
  scanf("%d %d %d", &a, &b, &c);
  printf("�����е����ֵΪ %d\n", max(a,b,c));
  printf("�����е���СֵΪ %d\n", min(a,b,c));
}