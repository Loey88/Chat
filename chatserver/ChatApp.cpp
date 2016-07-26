#include "ChatApp.h"

vector<User*> ChatApp::userList = vector<User*>();
const int ChatApp::MAXUSER = 5;
pthread_mutex_t ChatApp::mutx = PTHREAD_MUTEX_INITIALIZER;

void ChatApp::printNewUser(const User* user){

}

void ChatApp::printExceedUser(const User* user){

}

void ChatApp::start(){

}
