#include <stdio.h>

int main()
{
    char abc = 'a';
    do
    {
        putchar(abc);
        abc++;
    }
    while ('a' <= 'z');
    putchar('\n');
    return 0;
}

