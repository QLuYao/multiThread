#ifndef _H_BACK_GROUND_TASK_H_
#define _H_BACK_GROUND_TASK_H_
#include <thread>

struct func
{
    int& i;
    func(int& i) : i(i){};
    void operator()(){
        for(unsigned j{0} ; j < 10000000; ++j){
            //!< dosomething(i);
        }
    }
};



class background_Task
{
public:
    void operator()() const;
    void do_something() const;
    void do_something_else() const;
};

#endif //_H_BACK_GROUND_TASK_H_