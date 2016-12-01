#include <stdio.h>

int main(void)
{
  char input[100];
  int i = 0;
  int current_state = 0;
  int fin_state = 0;

  printf("数字を入力してください。\n");
   scanf("%s", input);

  while(input[i] != '\0'){
    switch(current_state) {
      case 0: 
       if( input[i] == '0' || input[i] == '3' || input[i] == '6' || input[i] == '9') { current_state = 0; }
       if( input[i] == '1' || input[i] == '4' || input[i] == '7' ) { current_state = 1; }
       if( input[i] == '2' || input[i] == '5' || input[i] == '8' ) { current_state = 2; } 
       break; 
      case 1:
       if( input[i] == '0' || input[i] == '3' || input[i] == '6' || input[i] == '9') { current_state = 1; }
       if( input[i] == '1' || input[i] == '4' || input[i] == '7' ) { current_state = 2; }
       if( input[i] == '2' || input[i] == '5' || input[i] == '8' ) { current_state = 0; }
       break;
      case 2:
       if( input[i] == '0' || input[i] == '3' || input[i] == '6' || input[i] == '9') { current_state = 2; }
       if( input[i] == '1' || input[i] == '4' || input[i] == '7' ) { current_state = 0; }
       if( input[i] == '2' || input[i] == '5' || input[i] == '8' ) { current_state = 1; }
       break;
    }
    printf("読み込んだ数値 : %c 遷移先 : %d\n", input[i], current_state);
    i++;
  }

  if(current_state == fin_state) {
    printf("受理する。\n");
  } else {
    printf("受理しない。\n");
  }

  return(0);
}
