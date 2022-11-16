#!/bin/bash

# gcc main.c functions.c data.c -o app.out
gcc src/main.c src/lib/functions.c src/data/data.c -o bin/app.out
./bin/app.out

# rm app.out
rm bin/app.out
