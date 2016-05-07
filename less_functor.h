//
// Created by Sumner Bradley on 5/6/2016.
//

#ifndef UCD_CSCI2312_PA5_MASTER_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_MASTER_LESS_FUNCTOR_H

#include <string>

using std::string;

namespace CS2312 {

    template<typename T>

    class less {

    public:
        bool operator()(const T &x, const T &y) { return (x < y); }

    };

    template<>

    class less<string> {

    public:
        bool operator()(const string &x, const string &y) { return (x < y); }

    };

    template<>

    class less<const char *> {

    public:
        bool operator()(const char *x, const char *y) { string __x, __y; __x = x; __y = y; return (__x < __y); }

    };

}
#endif //UCD_CSCI2312_PA5_MASTER_LESS_FUNCTOR_H
