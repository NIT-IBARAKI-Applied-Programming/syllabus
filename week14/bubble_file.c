#include <stdio.h>

void ShowData(int num[], int n);
void BubbleSort(int num[], int n);

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

  // バブルソートの実行
  printf("バブルソート開始\n");
  BubbleSort(a, data_size);
  ShowData(a, data_size);

  return 0;
}


