#!/bin/bash
clear;
echo -e "\E[32m=================================== COMPILING ===================================\E[0m"
#gcc -Wall -Werror -Wextra -pedantic -g -std=gnu89 *.c -o hsh; 
gcc  -g -std=gnu89 *.c -o hsh; 
echo -e "\E[33m============================== VALGRIND  EXECUTING ==============================\E[0m"
valgrind --leak-check=full --show-leak-kinds=all ./hsh
