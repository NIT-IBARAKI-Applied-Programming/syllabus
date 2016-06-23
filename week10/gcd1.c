/* しらみつぶしに最大公約数を探すプログラム */
#include <stdio.h>

int main(void) {
  // 最大公約数を求める2つの数を指定
  int x=8, y=22, tmp;
  // xの方が小さな数になるようにする
  if( x > y ) { tmp = x; x = y; y = tmp; }
  // 最大公約数を探す
  for(int i=x; i>0; --i) {
    if((x % i)==0 && (y % i) == 0) {
      printf("%dと%dの最大公約数: %d\n", x, y, i);
      break;
    }
  }
}


