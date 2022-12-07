#!/bin/bash
clear;
echo -e "\E[32m================================= COMPILING =================================\E[0m"
gcc -Wall -Werror -Wextra -pedantic -g -std=gnu89 *.c -o hsh; 
echo -e "\E[33m============================= NORMAL  EXECUTING =============================\E[0m"
./hsh;