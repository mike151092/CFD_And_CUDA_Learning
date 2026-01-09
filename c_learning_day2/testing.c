// program to understand the difference between float and double visibly 

#include <stdio.h>

int main() {
    float tf = 0.0f;
    double td = 0.0;
    int i;

    for (i = 0; i < 10000000; i++) {
        tf += 0.1f;
        td += 0.1;
    }

    printf("float  = %.10f\n", tf);
    printf("double = %.10f\n", td);

    return 0;
}

