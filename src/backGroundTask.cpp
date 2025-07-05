#include "backGroundTask.h"
#include <iostream>

void background_Task::operator()() const {
    do_something();
    do_something_else();
}

void background_Task::do_something() const {
    std::cout << " do_something " << std::endl;
}

void background_Task::do_something_else() const {
    std::cout << " do_something " << std::endl;
}
