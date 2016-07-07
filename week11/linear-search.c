#include <stdio.h>

#define DATA_SIZE 5

int main(void) {
  // 線形データ(日付、気温)をそれぞれ配列で表現
  int dates[DATA_SIZE] = {601, 602, 603, 604, 605};
  int tempretures[DATA_SIZE] = {25, 26, 30, 24, 23};
  // 線形データを表示
  int i = 0;
  while(1) {
    if(tempretures[i] >= 30){
      printf("%dが真夏日です。\n", dates[i]);
      break;
    } 
    if (i == DATA_SIZE){
      printf("合致するデータがありません。\n");
      break;
    }
    ++i;
  }
  return 0;
}


