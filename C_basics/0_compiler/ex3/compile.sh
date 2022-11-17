#!/bin/bash

gcc -c main.c -o objects/main.o
gcc -c functions.c -o objects/functions.o
gcc -c data.c -o objects/data.o

gcc objects/main.o objects/functions.o objects/data.o -o app.out

./app.out
