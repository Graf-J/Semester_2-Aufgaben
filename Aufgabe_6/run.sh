#!/bin/bash

g++ -c main.cpp Konto.cpp Giro.cpp Depot.cpp Kontoplan.cpp
g++ main.o Konto.o Giro.o Depot.o Kontoplan.o
./a.out