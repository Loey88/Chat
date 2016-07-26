#ifndef _ChatUser_H
#define _ChatUser_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netdb.h>
#include "ChatThread.h"

#define BUF_SIZE 100

using namespace std;

class ChatUser : public ChatThread{
	private:
		int clnt_sock;
		struct sockaddr_in clnt_addr;
		string IP;
	public:
		ChatUser(int cs, sockaddr_in ca);
		ChatUser(const User &user) {}
		void operator=(const User &user) {}
		~ChatUser();
		char* getIP();
		int getSocket();
		void run();


}






#endif
