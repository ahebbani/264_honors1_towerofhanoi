#include <stdio.h>
#include <stdlib.h>
#include "hanoi.h"

static bool readNumber(const char *filename, int *number) 
{
    FILE *fptr = fopen(filename, "r");

    // Check if the file could be opened
    if (fptr == NULL) {
        fprintf(stderr, "Error opening file: %s\n", filename);
        return false;
    }

    // Read the numerical value from the file
    if (fscanf(fptr, "%d", number) != 1) {
        fprintf(stderr, "Error reading numerical value from file: %s\n", filename);
        fclose(fptr);
    }

    // Close the file
    fclose(fptr);

    // Return true
    return true;
}

int main(int argc, char **argv) 
{
    if (argc != 2) {
        printf("No input file");
    }
    
    bool rtv;
    int num;
    rtv = readNumber(argv[1], num);
    if (rtv == false) {
        printf("Error reading from file.\n");
    }

    // Call function
    iterativeTowerOfHanoi(n, 'A', 'B', 'C');
}