#include <stdio.h>

#define DATA_SIZE 8

void ShowData(int num[], int n);
void BubbleSort(int num[], int n);
void InsSort(int num[], int n) ;

// データを表示する関数
void ShowData(int num[], int n)
{
  int i;
  for(i=0; i < n; i++) {
    printf("%d ", num[i]);
  }
  printf("\n");
}

void BubbleSort(int x[ ], int n)
{
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
    for (j = n - 1; j > i; j--) {
      if (x[j - 1] > x[j]) {  /* 前の要素の方が大きかったら */
        temp = x[j];        /* 交換する */
        x[j] = x[j - 1];
        x[j - 1]= temp;
      }
    } 
    /* ソートの途中経過を表示 */
    ShowData(x, DATA_SIZE);
  }
}

void InsSort(int num[ ], int n) {
  int i, j, temp;

  for (i = 1; i < n; i++) {      /* i 番目の要素をソート済みの配列に挿入 */
    temp = num[i];             /* i 番目の要素を temp に保存 */
    for (j = i; j > 0 && num[j-1] > temp; j--) { /* このループで */
      num[j] = num[j -1];                    /* temp を挿入する位置を決める */
    }
    num[j] = temp;             /* temp を挿入 */
    ShowData(num, n);   /* 途中経過を表示 */
  }
}

int main() {
  // データ定義
  int num[ ] = {3, 7, 1, 5, 4, 2, 6, 0};

  // ソート前のデータを表示
  //ShowData(num, DATA_SIZE);
  
  // バブルソートの実行
  //BubbleSort(num, DATA_SIZE);

  // 単純挿入ソートの実行
  InsSort(num, DATA_SIZE);
  
  return 0;
}


