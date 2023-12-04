This is the first of my two honors contract assignments for ECE 264. 

The tower of hanoi is a mathematical puzzle where we have three rods (A, B, and C) and N disks. Initially, all the disks are stacked in decreasing value of diameter i.e., the smallest disk is placed on the top and they are on rod A. The objective of the puzzle is to move the entire stack to another rod (here considered C), obeying the following simple rules: 

* Only one disk can be moved at a time.
* Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
* No disk may be placed on top of a smaller disk.

In this assignment, I will be using stacks to solve the tower of hanoi problem. The input will be the number of disks.The output of this program will be the moves made to arrange the N disks in descending order of size on rod C.

The expected values are the Geeksforgeeks algorithm for this problem:
https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi-2/

Although the traditional solution to this problem is recursion, when many disks are used, the program becomes inefficient due to the many recursive calls. This approach can be optimized by using stack operations instead, because it avoids the overhead of recursive function calls. However, both solutions should have the same time complexities.