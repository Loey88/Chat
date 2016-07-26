#ifndef _ChatThread_H
#define _ChatThread_H

#include <iostream>
#include <pthread.h>

class ChatThread{
	private:
		pthread_t t_id;
		static void* threadstart(void* arg);
	protected:
		virtual void run() = 0;
	public:
		ChatThread() : t_id(0) {}
		void start();
		void wait();
};
		
#endif
