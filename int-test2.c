#include <stdio.h>
int main() {
  int a = 50;
  int b = 10;
  
  printf("A = %d\nB = %d\nA - B = %d",&a, &b, (&a - &b));
  return 0;
}