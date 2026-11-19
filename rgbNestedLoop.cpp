// Copyright (c) 2026 Your Name All rights reserved.
//
// Created by: Vova M
// Created on: November 19, 2026
// This program prints all valid RGB colours using nested loops

#include <cstdio>
#include <iostream>

int main() {
    // this function uses a nested loop to print all RGB colours
    int counter1;
    int counter2;
    int counter3;

    // process & output
    for (counter1 = 0; counter1 < 256; counter1++) {
        for (counter2 = 0; counter2 < 256; counter2++) {
            for (counter3 = 0; counter3 < 256; counter3++) {
                printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)\n",
                       counter1, counter2, counter3,
                       counter1, counter2, counter3);
            }
        }
    }
}
