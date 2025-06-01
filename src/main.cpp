#include <iostream>
#include <thread>
void do_some_work();
class background_task
{
private:
    void do_something()const;
    void do_something_else()const;
public:
    background_task(/* args */);
    ~background_task();
    void operator()()const{
        bool test {false};
        while (!test)
        {
            do_something();
            do_something_else();
        }
    }
};

background_task::background_task(/* args */)
{
}

background_task::~background_task()
{
}

void background_task::do_something() const
{
    std::cout << " do_something " << std::endl;
}

void background_task::do_something_else() const
{
    std::cout << " do_something_else " << std::endl;
}

int main(){
    background_task f;
    std::thread my_thread{f};
    my_thread.join();
    std::cout << " end!!!!!!!!!!!!!!!! " << std::endl;
    return 0;
}