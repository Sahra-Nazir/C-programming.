#include <stdio.h>

int main() {
    unsigned int a = 60; 
    unsigned int b = 13; 
    int result = 0;

    // Bitwise AND operator
    result = a & b; 
    printf("a & b = %d\n", result);

    // Bitwise OR operator
    result = a | b; 
    printf("a | b = %d\n", result);

    // Bitwise XOR operator
    result = a ^ b; 
    printf("a ^ b = %d\n", result);

    // Bitwise complement operator
    result = ~a; // (depends on the system's integer size, this is the 2's complement representation)
    printf("~a = %d\n", result);

    // Bitwise left shift operator
    result = a << 2; 
    printf("a << 2 = %d\n", result);

    // Bitwise right shift operator
    result = a >> 2; 
    printf("a >> 2 = %d\n", result);

    return 0;
}