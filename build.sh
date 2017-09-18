#!/bin/bash
g++ example_lib.cpp -fPIC -shared -o libfoo.so
g++ example_main.cpp -fPIC -ldl -rdynamic -o main
