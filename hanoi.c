#include <stdio.h>
#include <stdlib.h>
#include "hanoi.h"

// Function to perform the Tower of Hanoi iteratively using stacks
void iterativeTowerOfHanoi(int n, char source, char auxiliary, char destination) {
    struct StackFrame *stack = (struct StackFrame *)malloc(sizeof(struct StackFrame) * (1 << n));
    int top = -1;

    stack[++top] = (struct StackFrame){n, source, auxiliary, destination, 0};

    while (top >= 0) {
        struct StackFrame *current = &stack[top];

        switch (current->state) {
            case 0:
                if (current->n > 0) {
                    stack[++top] = (struct StackFrame){current->n - 1, current->aux, current->source, current->dest, 0};
                }
                current->state = 1;
                break;

            case 1:
                printf("Move disk %d from Peg %c to Peg %c\n", current->n, current->source, current->dest);
                current->state = 2;
                break;

            case 2:
                if (current->n > 0) {
                    stack[++top] = (struct StackFrame){current->n - 1, current->source, current->dest, current->aux, 0};
                }
                top--;
                break;
        }
    }

    free(stack);
}