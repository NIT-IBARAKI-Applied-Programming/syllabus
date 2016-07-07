#include <stdio.h>

int main(void) {
  // 必要な変数定義
  int a[] = {5, 7, 15, 28, 29, 31, 39, 58, 68, 70, 95};
  int key = 39;
  int left = 0;
  int right = sizeof(a)/sizeof(int) - 1;
  printf("%d", right);
  int center;
  // 二分探索アルゴリズム
  do {
    int center = (left + right) / 2;
    if (a[center] == key) {
      printf("a[%d]が%dでした。", center, key); return 0;
    } else if (a[center] < key) {
      left = center + 1;
    } else {
      right = center -1;
    } 
  } while (left <= right);
  printf("見つかりませんでした。");
  return 0;
}

