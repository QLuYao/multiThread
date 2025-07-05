#include <iostream>
#include <thread>
#include "threadGuard.h"
#include "backGroundTask.h"

int main(){
    background_Task f;
    std::thread my_thread(f);
    thread_Guard g(my_thread);
    return 0;
}