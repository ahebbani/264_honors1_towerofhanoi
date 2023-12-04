// Structure to represent a frame in the stack
struct StackFrame {
    int n;       // Number of disks
    char source; // Source peg
    char aux;    // Auxiliary peg
    char dest;   // Destination peg
    int state;   // Current state in the iterative solution
};

// Recursive function to sort the disks
void iterativeTowerOfHanoi(int n, char source, char aux, char dest);