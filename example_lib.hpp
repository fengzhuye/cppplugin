#ifndef __FOO_HPP__
#define __FOO_HPP__

#include <iostream>

#define MY_API __attribute__((visibility("default")))  // "hidden" is not visible

class Foo
{
    public:
        Foo()
        {
            std::cout << "Foo ctor" << std::endl;
        }
        ~Foo()
        {
            std::cout << "Foo dtor" << std::endl;
        }
};

#endif
