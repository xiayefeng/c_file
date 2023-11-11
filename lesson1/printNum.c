#include <stdio.h>
int cube(int);
double AVE(double x, double y, double z);

void main()
{
  int x,y;
  int a,b,c;
  double averageValue;

  x=5; y = 6;
  printf("x+y=%d, ", x+y);
  printf("x*y=%d\n", x*y);
  printf("cube(3)=%d\n", cube(3));
  printf("cube(5)=%d\n", cube(5));
  printf("cube(8)=%d\n", cube(8));
  printf("sizeof int %d\n", sizeof(int));

  a=2;b=3;c=4;
  averageValue = AVE(a,b,c);
  printf("averageValue: %lf\n", averageValue);
  averageValue = AVE(a+1, b+2, c+5);
  printf("averageValue: %lf\n", averageValue);

}

int cube(int x) 
{
	return x*x*x;
}

double AVE(double x, double y, double z)
{
  return (x+y+z)/3;
}