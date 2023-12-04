#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "hanoi.h"

// Function to print the move
void printMove(int disk, char source, char destination) {
    printf("Move disk %d from rod %c to rod %c\n", disk, source, destination);
}

// Function to move a disk from source peg to destination peg
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printMove(1, source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    printMove(n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}