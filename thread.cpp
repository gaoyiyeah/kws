#include "thread.h"

Thread::Thread(int order1){
    order = order1;
}

Thread::~Thread(){

}

void Thread::run(){
    if(order == -1){
        emit showDialog();
    }
    else{
        emit startedit(order);
    }
}
