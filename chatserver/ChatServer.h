#include <iostream>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netdb.h>
#include "ChatUser.h"
using namespace std;

class ChatServer{
	private:
		int serv_sock;
		struct sockaddr_in serv_addr;
	public:
		ChatServer(int port=0);
		~ChatServer();

		void binding();
		void listening(int size);
		ChatUser* acceptUser();

};

