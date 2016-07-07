#include <stdio.h>

#define DATA_SIZE 5

int main(void) {
  // 線形データ(日付、気温)をそれぞれ配列で表現
  // 末尾に真夏日のデータを挿入
  int dates[DATA_SIZE+1] = {601, 602, 603, 604, 605, 0};
  int tempretures[DATA_SIZE+1] = {25, 26, 29, 24, 23, 30};
  // 線形データを表示
  int i = 0;
  while(1) {
    if(tempretures[i] >= 30){
      if (dates[i] != 0) {
        printf("%dが真夏日です。\n", dates[i]);
      } else {
        printf("合致するデータはありません。");
      }
      break;
    } 
    ++i;
  }
  return 0;
}


