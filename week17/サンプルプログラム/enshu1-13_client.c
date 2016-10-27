#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h> 
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <unistd.h>

int main() {
  // サーバー情報の宣言
  struct sockaddr_in server;
  server.sin_family = AF_INET;
  server.sin_port = htons(2048);
  server.sin_addr.s_addr = inet_addr("0.0.0.0");

  // ソケット作成と接続
  int socket_fd = socket(AF_INET, SOCK_STREAM, 0);
  connect(socket_fd, (struct sockaddr *)&server, 
              sizeof(server));

  // メッセージ送信
  printf("message> "); 
  // メッセージをキーボードから読み込み送信
  char string[256]; scanf("%s", string);
  send(socket_fd, string, strlen(string)+1, 0);

  close(socket_fd);

  return 0;
}
