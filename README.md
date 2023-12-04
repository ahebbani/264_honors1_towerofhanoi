This is the first of my two honors contract assignments for ECE 264. 

In this assignment, I will be using recursion to solve the tower of hanoi problem. The input will be the number of disks to be sorted.

The tower of hanoi is a mathematical puzzle where we have three rods (A, B, and C) and N disks. Initially, all the disks are stacked in decreasing value of diameter i.e., the smallest disk is placed on the top and they are on rod A. The objective of the puzzle is to move the entire stack to another rod (here considered C), obeying the following simple rules: 

* Only one disk can be moved at a time.
* Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
* No disk may be placed on top of a smaller disk.

The output of this program will be the moves made to arrange the N disks in descending order of size on rod C.