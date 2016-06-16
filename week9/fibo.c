#include <stdio.h>

int fibo(int n) {
  int a = 0, b = 1, c, i;

  for(i = 0; i < n; ++ i){
    printf("%d ", c = a + b);
    a = b;
    b = c;
  }
  printf("\n");
  return 0;
}

int main(void) {
  fibo(10);
}
