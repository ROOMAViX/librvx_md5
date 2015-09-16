rem Public Domain (PD) 2015 ROOMAViX. All Rights Left.
set PATH=%PATH%;C:\MinGW\bin
echo off
if "%1" == "-clean" goto clean
title Building librvx_md5-1.0
echo.
echo Building librvx_md5-1.0
echo.
mkdir bin
gcc -c src\librvx_md5.c -o bin\librvx_md5.o
gcc -shared -o bin\librvx_md5.dll bin\librvx_md5.o -Wl,--out-implib,bin\librvx_md5.a
gcc test\main.c bin\librvx_md5.dll -o bin\main.exe
pause
exit
:clean
rd /s /q bin
echo Cleaned
pause
