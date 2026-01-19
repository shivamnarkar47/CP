#include <cstdio>
#include <string>

#ifndef FAST_IO_CPP
#define FAST_IO_CPP

struct FastScanner {
    static const int BUFSIZE = 1 << 20;
    int idx, size;
    char buf[BUFSIZE];
    
    FastScanner(): idx(0), size(0) {}
    
    inline char read() {
        if (idx >= size) {
            size = fread(buf, 1, BUFSIZE, stdin);
            idx = 0;
            if (size == 0) return 0;
        }
        return buf[idx++];
    }
    
    template<typename T>
    bool nextInt(T &out) {
        char c;
        T sign = 1;
        T val = 0;
        c = read();
        if (!c) return false;
        while (c != '-' && (c < '0' || c > '9')) {
            c = read();
            if (!c) return false;
        }
        if (c == '-') {
            sign = -1;
            c = read();
        }
        for (; c >= '0' && c <= '9'; c = read()) {
            val = val * 10 + (c - '0');
        }
        out = val * sign;
        return true;
    }
    
    std::string next() {
        char c;
        std::string res;
        c = read();
        if (!c) return "";
        while (c == ' ' || c == '\n' || c == '\r' || c == '\t') {
            c = read();
            if (!c) return "";
        }
        for (; c && c != ' ' && c != '\n' && c != '\r' && c != '\t'; c = read()) {
            res += c;
        }
        return res;
    }
};

#endif
