#!/bin/bash
gcc *.c -c -fpIC
gcc *.o -shared -o libdynamic.so
