#include <stdio.h>
int main() {
  int a = 10;
  int b = 10;
  
  printf("A = %d\nB = %d\nTotal = %d",&a, &b, (&a + &b));
  return 0;
}