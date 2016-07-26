#ifndef _ChatApp_H
#define _ChatApp_H

#include <iostream>
#include <vector>
#include <sstream>
#include <pthread.h>
#include "ChatServer.h"
#include "ChatUser.h"
#include "ChatThread.h"

using namespace std;

class ChatApp{
	private:
		ChatServer cs;
		static const int MAXUSER;
	public:
		ChatApp() : cs(8848) {};
		void start();
		void printNewUser(const User* user);
		void printExceedUser(const User* user);
		static vector<User*> userList;
		static pthread_mutex_t mutx;
};

#endif
