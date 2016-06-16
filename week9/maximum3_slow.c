#include <stdio.h>

int main(void) {
  int n1=1, n2=2, n3=3, max;
  // n1, n2, n3の最大値を求める(すべての条件列挙)
  if ((n1 > n2 && n2 > n3) || (n1 > n2 && n2 == n3) || (n1 > n3 && n3 > n2) || (n1 == n3 && n3 > n2) || (n1 == n2 && n2 > n3) || (n1 == n2 && n2 == n3)) {
     max = n1;
  } else if ((n2 > n1 && n1 > n3) || (n2 > n1 && n1 == n3) || (n2 > n3 && n3 > n1) || (n2 == n3 && n3 > n1)) {
    max = n2;
  } else {
    max = n3;
  }
  // 結果表示
  printf("最大値は%dです。\n", max);
}



