#!/bin/sh
clear
gcc execute.c
mv a.out Receipts
cd Receipts
./a.out
rm a.out