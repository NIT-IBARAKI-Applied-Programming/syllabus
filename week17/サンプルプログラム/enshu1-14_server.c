#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h> 
#include <netinet/in.h>
#include <unistd.h>

int main() {
  // sockaddr_in構造体の宣言
  struct sockaddr_in server, client;
  // serverの情報を代入
  server.sin_family = AF_INET;
  server.sin_port = htons(2048);
  server.sin_addr.s_addr = inet_addr("0.0.0.0");
  
  // ソケットの作成
  int server_fd = socket(AF_INET, SOCK_STREAM, 0);
  // sockaddr_in構造体の情報をソケットに関連付け
  int b = bind(server_fd, (struct sockaddr *)&server, sizeof(server));
  // クライアントからの接続待ちを準備
  listen(server_fd, 5);
  // クライアントからの接続待ちを開始
  int client_length = sizeof(client);
  int client_fd;
  client_fd = accept(server_fd, 
    (struct sockaddr *)&client, &client_length);
 
  // クライアントから受け取った文字列を表示
  char read_buffer[1000];
  while(1) {
    recv(client_fd, read_buffer, sizeof(read_buffer)+1, 0);
    printf("accept> %s\n", read_buffer);
  }

  close(server_fd);
  return 0;
}
