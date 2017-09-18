#include "Plugin.h"
#include "example_lib.hpp"

int main()
{
    try
    {
        Plugin<Foo> * plugin = new Plugin<Foo>("./libfoo.so", "load", "unload");
	Foo * p = plugin->Load();
	plugin->Unload();
    }
    catch(PluginException& e)
    {
        std::cerr << "exception: " << e.what() << std::endl;
    }

    return 0;
}
