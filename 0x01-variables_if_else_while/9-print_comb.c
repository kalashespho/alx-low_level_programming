#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * */

 int main() {
    int i;
    for (i = 0; i <= 9; i++) {
        int j;
        for (j = i; j <= 9; j++) {
            putchar(i+'0');
            putchar(j+'0');
            if (i != 9 || j != 9) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    return 0;
 }
