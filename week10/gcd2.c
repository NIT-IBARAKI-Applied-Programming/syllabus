/* ユークリッドの互除法 */

#include <stdio.h>

int gcd(int x, int y) {
  if (y == 0) {
    return x;
  } else {
    return gcd(y, x % y);
  }
}

int main(void) {
  printf("22と8の最大公約数：%d\n", gcd(22, 8));
}



