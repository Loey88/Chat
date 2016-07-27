#include "ChatUser.h"
#include "ChatApp.h"

ChatUser::ChatUser(int cs, sockaddr_in ca){
	clnt_sock = cs;
	clnt_addr = ca;
}

ChatUser::~ChatUser(){
	close(clnt_sock);
}

char* ChatUser::getIP(){
	return inet_ntoa(this->clnt_addr.sin_addr);	
}

int ChatUser::getSocket(){
	return this->clnt_sock;
}
void run(){


}
