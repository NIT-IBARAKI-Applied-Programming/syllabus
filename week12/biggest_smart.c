#include <stdio.h>

int main(void) {
  int a, b, c, max;
  a = 5; b = 2; c = 3;
  // 最大値を求める
  max = a;
  if (max < b) max = b;
  if (max < c) max = c;
  printf("最大値は%dです。\n", max);
  return 0;
}


