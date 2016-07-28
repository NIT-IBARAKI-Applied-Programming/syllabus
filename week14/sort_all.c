#include <stdio.h>

#define DATA_SIZE 8
#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

void ShowData(int num[], int n);
void BubbleSort(int num[], int n);
void InsSort(int num[], int n) ;
void quick(int a[], int left, int right);

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
    //ShowData(x, DATA_SIZE);
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
    //ShowData(num, n);   /* 途中経過を表示 */
  }
}

/* クイックソート */
void quick(int a[], int left, int right) {
  int pl = left;
  int pr = right;
  int x = a[(pl+pr)/2];
  // 1. 配列の分割
  do {
    while (a[pl] < x) pl++;
    while (a[pr] > x) pr--;
    if (pl <= pr) {
      swap(int, a[pl], a[pr]);
      pl++;
      pr--;
    }   
  } while (pl <= pr);
  // 2. 再帰呼び出し
  if (left < pr) quick(a, left, pr);
  if (pl < right) quick(a, pl, right);
}

int main() {
  // データ定義
  int num1[ ] = {3, 7, 1, 5, 4, 2, 6, 0};
  int num2[ ] = {3, 7, 1, 5, 4, 2, 6, 0};
  int num3[ ] = {3, 7, 1, 5, 4, 2, 6, 0};

  // バブルソートの実行
  printf("バブルソート開始\n");
  BubbleSort(num1, DATA_SIZE);
  ShowData(num1, DATA_SIZE);

  // 単純挿入ソートの実行
  printf("単純挿入ソート開始\n");
  InsSort(num2, DATA_SIZE);
  ShowData(num2, DATA_SIZE);
  
  printf("クイックソート開始\n");
  quick(num3, 0, DATA_SIZE-1);
  ShowData(num3, DATA_SIZE);
  return 0;
}


