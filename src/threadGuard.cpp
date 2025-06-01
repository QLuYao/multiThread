#include "threadGuard.h"

thread_Guard::thread_Guard(std::thread& t)
    : m_thread(t)
{
}

thread_Guard::~thread_Guard()
{
    if(m_thread.joinable()){
        m_thread.join();
    }
}