#include <stdio.h>

int main(void) {
  int n1=1, n2=2, n3=3, max;
  // n1, n2, n3の最大値を求める
  max = n1;
  if (n2 > max) max = n2;
  if (n3 > max) max = n3;
  // 結果表示
  printf("最大値は%dです。\n", max);
}



