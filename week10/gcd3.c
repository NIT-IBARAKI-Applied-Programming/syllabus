#include <stdio.h>

int gcd(int x, int y){
    int r;
    //再帰なしのユークリッドの互除法により最大公約数を求める
    while( (r = x % y) != 0 ) {
        x = y;
        y = r;
    }
    // 短い方の辺を返す
    return y;
}

int main()
{
    // 最大公約数を求める数を指定
    int x=22, y=8, tmp;

    // xが大きくなるようにする
    if( x < y ) { tmp = x; x = y; y = tmp; }
    printf("%dと%dの最大公約数：%d\n", x, y, gcd(x, y));
    
}
