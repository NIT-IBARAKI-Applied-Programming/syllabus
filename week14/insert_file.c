#include <stdio.h>

void ShowData(int num[], int n);
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

  // 単純挿入ソートの実行
  printf("単純挿入ソート開始\n");
  InsSort(a, data_size);
  ShowData(a, data_size);

  return 0;
}


