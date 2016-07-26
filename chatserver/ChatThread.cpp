#include "ChatThread.h"

void* ChatThread::threadstart(void* arg){
	ChatThread* pThread = (ChatThread*)arg;
	pThread->run();
}

void ChatThread::start(){
	pthread_create(&t_id, NULL, &ChatThread::threadstart, this);
}

void ChatThread::wait(){
	pthread_join(t_id, NULL);
}
