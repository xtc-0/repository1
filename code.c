#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: ./code <float1> <float2>\n");
        return 1;
    }

    float num1 = atof(argv[1]);
    float num2 = atof(argv[2]);
    float sum = num1 + num2;

    printf("Sum: %.2f\n", sum);
    return 0;
}

