#!/bin/bash
wget -P .. /tmp/ https://raw.githubusercontent.com/Abrhamtaye7/alx-low_level_programming/main/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD="/tmp/../libdynamic.so"
