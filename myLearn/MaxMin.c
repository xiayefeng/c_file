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
  
  printf("输入a,b,c的整数值:");
  scanf("%d %d %d", &a, &b, &c);
  printf("它们中的最大值为 %d\n", max(a,b,c));
  printf("它们中的最小值为 %d\n", min(a,b,c));
}