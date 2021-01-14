#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle

template<class T>
void sortujTagliatelle(T a, T b)
{
	std::sort(a, b, [](T c, T d) { return (c < d); });
}