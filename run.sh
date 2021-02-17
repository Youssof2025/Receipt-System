#!/bin/sh
clear
gcc execute.c
mv a.out Reciepts
cd Reciepts
./a.out
rm a.out