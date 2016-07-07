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
    /* ここに中央の添字を求める処理を書く*/
    if (a[center] == key) {
      printf("a[%d]が%dでした。", center, key); return 0;
    } else if (/* 「中央の値が探索対象よりも小さい」条件式を書く*/) {
      /* leftの値を中央の添字+1する処理を書く */
    } else {
      /* rightの値を中央の添字-1する処理を書く */
    } 
  } while (left <= right);
  printf("見つかりませんでした。");
  return 0;
}

