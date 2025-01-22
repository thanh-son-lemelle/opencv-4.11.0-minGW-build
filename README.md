# opencv-4.11.0-minGW-build

dowload buile files with the following link
https://github.com/thanh-son-lemelle/opencv-4.11.0-minGW-build/releases/download/v4.11.0/opencv.zip
unzip it in your root system
you should have something like this : C:\opencv\build\x64\mingw64\bin
install msys64 if you don't have it already : https://github.com/msys2/msys2-installer/releases/download/2024-12-08/msys2-x86_64-20241208.exe
you can follow this install guide : https://www.msys2.org/
run msys2 terminal and enter the following command :
pacman -S mingw-w64-x86_64-gdb
pacman -S mingw-w64-x86_64-gcc
enter the following env variables into the PATH of your system
C:\msys64\mingw64\bin
C:\opencv\build\x64\mingw64\bin
ensure that you have an gcc.exe and a gdb.exe in C:\msys64\mingw64\bin
