#!/bin/bash
wget -P ../ https://github.com/kangina-tech/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD=../libhack.so
