#include <stdio.h>

void swap(int *p, int *q);

int main()
{
  int a = 3, b = 4;
  printf("Before swap, a is %d b is %d\n",a,b);
  swap(&a,&b);
  printf("After swap, a is %d b is %d\n",a,b);
  return 0;
}

void swap(int *p, int *q)
{
  int temp = *p;
  *p = *q;
  *q = temp;
}
