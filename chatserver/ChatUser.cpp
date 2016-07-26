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
	
}
