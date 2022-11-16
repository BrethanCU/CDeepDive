REM gcc main.c functions.c data.c -o \bin\app.exe

gcc src\main.c src\lib\functions.c src\data\data.c -o bin\app.exe
.\bin\app.exe & rm bin\app.exe
