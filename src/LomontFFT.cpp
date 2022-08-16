#include <iostream>
#include "LomontFFT.h"

void LomontFFT(){
    #ifdef NDEBUG
    std::cout << "LomontFFT/0.1: Hello World Release!" <<std::endl;
    #else
    std::cout << "LomontFFT/0.1: Hello World Debug!" <<std::endl;
    #endif
}
