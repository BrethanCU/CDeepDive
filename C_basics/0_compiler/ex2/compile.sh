#!/bin/bash
gcc src/main.c src/lib/functions.c src/data/data.c -o bin/app.out

./bin/app.out
