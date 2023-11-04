#include <stdio.h>
#include <math.h>

int product(int x, int y);
void printNum();

void main() {
  int a,b,c;
  printf("输入两个整数: ");
  scanf("%d %d", &a, &b);
  c=product(a,b);
  printf("%d*%d=%d\n", a, b, c);
  printNum();
}

int product(int x, int y) {
  int z;
  z=x*y;
  return z;
}

void printNum() {
 double x,y,z;
 x = 5.0;
 y = pow(x, 3);
 z = sqrt(x);
 printf("%Lf %Lf %Lf\n",x,y,z);
}