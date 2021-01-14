#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem
template<class T>
size_t polejSosem(const Tagliatelle* obj, const T* rsosu){
    return rsosu->polej(obj);
};