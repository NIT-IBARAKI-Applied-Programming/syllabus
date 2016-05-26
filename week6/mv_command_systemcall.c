#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
  // 演習3-1
    printf("コマンドライン第1引数：%s\n", argv[1]);
    printf("コマンドライン第2引数：%s\n", argv[2]);
  // 演習3−2
    int file1 = open(argv[1], O_RDONLY);
    int file2 = open(argv[2], O_WRONLY|O_CREAT|O_TRUNC,0666 );
  // 演習3−3
    char s[256];
    // 補足：read関数の戻り値は読み込んだ文字列の長さ
    int length = read(file1, s, sizeof(s));
    write(file2, s, length);
  // 演習3−4
    remove(argv[1]);
  // 演習3-5
    close(file1);
    close(file2);
    
    return (0);
}
