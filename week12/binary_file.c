#include <stdio.h>

int main(void) {
  int i, data_size = 0;
  int a[512];    /* 大きめのサイズの配列を用意しておく． */
  FILE *fp;
 
  fp = fopen("~ishigaki/sample4binary.txt", "r");
  if(fp == NULL) {
    printf("ファイルを開くことが出来ませんでした．¥n");
    return 0;
  }

  /*  ファイルが終わりでない　「かつ」　
    配列を飛び出さないうちは，読み込みを続ける  */
  while ( ! feof(fp) && data_size < 512) {
    fscanf(fp, "%d", &(a[data_size]));
    data_size++;
  }
  fclose(fp);
  data_size = data_size-1; 
  /* なお、上のwhileループでは，EOFの行を余分に
  読み込んでいるので，実際のデータ数は一つ少ない． */
 
  // 必要な変数定義
  //int a[] = {5, 7, 15, 28, 29, 31, 39, 58, 68, 70, 95};
  int key = 39;
  int left = 0;
  int right = data_size;
  printf("%d", right);
  int center;
  // 二分探索アルゴリズム
  do {
    int center = (left + right) / 2;
    if (a[center] == key) {
      printf("a[%d]が%dでした。", center, key); return 0;
    } else if (a[center] < key) {
      left = center + 1;
    } else {
      right = center -1;
    } 
  } while (left <= right);
  printf("見つかりませんでした。");
  return 0;
}

