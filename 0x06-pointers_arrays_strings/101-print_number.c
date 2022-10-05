#include <stdio.h>

void print_number(int n)
{

    unsigned int num = n;
    // If number is smaller than 0, put a - sign
    // and change number to positive
    if (n < 0) {
        putchar('-');
        n = -n;
    }

    // Remove the last digit and recur
    if (n/10)
        print_number(n/10);

    // Print the last digit
    putchar(n%10 + '0');
}
