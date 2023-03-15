#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */
int main(void)
{
    int catch;
    char c;

    srand(time(NULL));
    while (catch <= 2725)
    {
        c = rand() % 134;
        catch += c;
        putchar(c);
    }
    putchar(2769 - catch);
    return (0);
}
