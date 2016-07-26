#include "ChatServer.h"

ChatServer::ChatServer(int port){
	
	serv_sock = socket(PF_INET, SOCK_STREAM, 0);
	if(serv_sock == -1)
		printf("socket error\n");
	
	memset(&serv_addr, 0, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(port);
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
}

ChatServer::~ChatServer(){
	close(serv_sock);
}

void ChatServer::binding(){
	if(bind(serv_sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) == -1)
		printf("bind error\n");
}

void ChatServer::listening(int size){
	if(size <= 0)
		printf("listening size error\n");
	if(listen(serv_sock, size) == -1)
		printf("listening error\n");

}

ChatUser* ChatServer::acceptUser(){
	int clnt_sock;
	struct sockaddr_in clnt_addr;
	int clnt_addr_size = sizeof(clnt_addr);
	clnt_sock = accept(serv_sock, (struct sockaddr*)&clnt_addr, &clnt_addr_size);
	if(clnt_sock == -1)
		printf("accept error\n");
	return new ChatUser(clnt_sock, clnt_addr);
}
