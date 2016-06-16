#include <stdio.h>

int fibo_recursive(int x) {
  // aは2つ前、bは1つ前の数を格納
  int a = 0, b = 1, c, i;
  printf("%d %d ", a, b);

  for(i = 0; i < 10; ++ i){                                                     
    // 2つ前、1つ前の数を足して表示
    printf("%d ", c = a + b); 
    a = b;
    b = c;
  }
  printf("\n");
  return 0;
}

int main(void) {
  fibo_recursive(10);
}
