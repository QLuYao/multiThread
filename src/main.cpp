#include <iostream>
#include <thread>
#include "threadGuard.h"

//!< 卫生间-马桶、地漏、洗手池20.
//!< 客厅-扫地、拖地、收拾桌子、收拾地面、收拾沙发、收拾猫砂.
//!< 厨房-收拾冰箱、收拾锅碗筷、收拾台面、收拾厨房垃圾、收拾地面.
//!< 卧室-收拾地面、收拾床、收拾衣物、收拾桌子、收拾衣架、洗衣服\晾衣服.
//!< 阳台-收衣服50.



int main(){
    std::thread my_thread{[](){
        bool test{false};
        while (!test)
        {
            std::cout << " start thread !!!!!!!!!!!!! " << std::endl;
        }
    }};
    thread_Guard thrGua(my_thread);
    my_thread.join();
    int a = 0;
    int b = 0;
    while (true)
    {
        if(10 < b){
            b = 0;
        }
        std::cout << " main thread " << a + b <<std::endl;/* code */
        a += b;
        b++;
    }
    
    return 0;
}