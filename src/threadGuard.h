#ifndef _H_THREAD_GUARD_H_
#define _H_THREAD_GUARD_H_
#include <thread>

class thread_Guard
{
private:
    std::thread& m_thread;
public:
    explicit thread_Guard(std::thread& t);
    thread_Guard(thread_Guard const&/* args */) = delete;
    thread_Guard& operator=(thread_Guard&) = delete;
    ~thread_Guard();
};

#endif //_H_THREAD_GUARD_H_