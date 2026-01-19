#include <bits/stdc++.h>

#ifndef DEBUG_CPP
#define DEBUG_CPP

#define DEBUG(x) std::cerr << #x << " = " << x << std::endl

template<typename T>
void printVec(const std::vector<T> &v, const std::string &name) {
    std::cerr << name << ": [";
    for (size_t i = 0; i < v.size(); ++i) {
        std::cerr << v[i];
        if (i + 1 < v.size()) std::cerr << ", ";
    }
    std::cerr << "]" << std::endl;
}

#endif
