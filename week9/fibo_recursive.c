#include <stdio.h>
// フィボナッチ数を求める
int fibo_recursive(int x) {
  int f = 0;
  switch (x) {
    case 0:
      f = 0; break;
    case 1:
      f = 1; break;
    default:
      f = fibo_recursive(x - 1) + fibo_recursive(x - 2);
      break;
  }
    return (f);
}

int main(void) {
    int n;
    //　キーボードから値を読み込み
    printf("n = ");
    scanf("%d", &n);

    // フィボナッチ数列を表示
    for(int i = 0; i <= n; i++) {
      printf("F(%d) = %d\n", i, fibo_recursive(i));
    }
    return 0;
}
