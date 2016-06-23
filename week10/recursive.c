/* 第10週演習1のプログラム */
#include <stdio.h>

void recursive(int n) {
  if (n > 0) {
    recursive(n-1);
    printf("%d\n", n);
    recursive(n-2);
  }
}

int main(void) {
  recursive(4);
}


