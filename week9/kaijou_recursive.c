#include <stdio.h>

int recursive_kaijou(int number) {
  if (number > 0 ) {
    return number * recursive_kaijou(number -1);
  } else {
    return 1;
  }
}

int main(void) {
  printf("5の階乗は%d\n", recursive_kaijou(5));
}



