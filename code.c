#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>  // Include for variable arguments

// Function to sum a variable number of arguments
float sum_floats(int count, ...) {
    va_list args;
    va_start(args, count);
    float sum = 0;

    for (int i = 0; i < count; i++) {
        sum += va_arg(args, double);  // va_arg expects the type to be double for float arguments
    }

    va_end(args);
    return sum;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {  // Ensure at least one number is provided
        printf("Usage: ./code <float1> <float2> ... <floatN>\n");
        return 1;
    }

    float sum = 0;
    int count = argc - 1;  // Subtract 1 for the program name

    // Convert each argument to a float and calculate the sum
    for (int i = 1; i < argc; i++) {
        float num = atof(argv[i]);
        sum += num;
    }

    printf("The sum of the provided numbers is: %.2f\n", sum);
    return 0;
}


