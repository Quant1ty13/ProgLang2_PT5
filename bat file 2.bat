@echo on

g++ -m64 -Wall -O2 -std=c++17 -c sortlibrary.cpp
g++ -m64 -Wall -O2 -std=c++17 -c pt5.cpp
g++ -m64 -Wall -O2 -std=c++17 sortlibrary.o pt5.o -o pt5

pause
exit