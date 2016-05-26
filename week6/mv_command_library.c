#include <stdio.h>

int main(int argc, char* argv[]) {
  // 演習1
    printf("コマンドライン第一引数：%s\n", argv[1]);
  
  // 演習2
    FILE *fp1, *fp2;
    char c;

    if ((fp1 = fopen(argv[1], "r")) == NULL) {
        printf("コピー元のファイルが開けません。\n");
        return(1);
    }
    if ((fp2 = fopen(argv[2], "w")) == NULL) {
        printf("コピー先のファイルが開けません。\n");
        return(1);
    }

    while ((c = fgetc(fp1)) != EOF) {
        fputc(c, fp2);
    }

    // 削除
    remove(argv[1]);

    fclose(fp2);
    fclose(fp1);

    return (0);
}
