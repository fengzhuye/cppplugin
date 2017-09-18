#include "example_lib.hpp"

extern "C" MY_API Foo* load()
{
    Foo* p = new Foo();
    return p;
}

extern "C" MY_API void unload( Foo* p)
{
    if(p)
        delete p;
}
