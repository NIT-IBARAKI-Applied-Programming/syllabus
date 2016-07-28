#include <stdio.h>

#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

void ShowData(int num[], int n);
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
  // ファイルからデータ読み込み
  int i, data_size = 0;
  int a[50000];
  FILE *fp;

  fp = fopen("sample4binary.txt", "r");
  if (fp == NULL) { 
    printf("ファイルを開くことが出来ませんでした。");
    return 0;
  }

  while ( ! feof(fp) && data_size < 50000 ) {
    fscanf(fp, "%d", &(a[data_size]));
    data_size++;
  }
  fclose(fp);
  data_size = data_size -1;
  
  printf("クイックソート開始\n");
  quick(a, 0, data_size-1);
  ShowData(a, data_size);

  return 0;
}


