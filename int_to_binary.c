#include "main.h"
#include <stdio.h>
/**
 * int_to_binary - function that converts decimal to binary
 * @n: the string to check the length
 */
void int_to_binary(int n) {
    if (n == 0) {
        putchar('0');
        return;
    }

    if (n < 0) {
        _putchar(45);
        n = -n;
    }

    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        _putchar(binaryNum[j]+'0');
}
