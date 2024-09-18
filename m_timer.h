#ifndef M_TIMER_H
#define M_TIMER_H
#include <iostream>
#include<chrono>
class timer
{
  public:
 timer():start_(std::chrono::system_clock::now()){}

~timer()
{
    std::chrono::system_clock::time_point end_=std::chrono::system_clock::now();
std::cout<<" stop timer :: "<<std::chrono::duration<double>  {end_-start_}.count()<<" sec\n";

}

private:
 std::chrono::system_clock::time_point start_;
};


#endif
