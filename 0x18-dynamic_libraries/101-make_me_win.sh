#!/bin/bash
wget -p .. https://raw.githubuser.com/austine-2020/alx-low_level_programming/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
