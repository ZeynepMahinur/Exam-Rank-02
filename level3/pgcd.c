#include <stdlib.h>
#include <stdio.h>

unsigned int    pgcd(unsigned int a, unsigned int b)
{
    unsigned int current;

    if (a == 0 || b == 0)
        return (0);

    if (a > b)
        current = a;
    else
        current = b;
    while (current > 0)
    {
        if (a % current == 0)
        {
            if (b % current == 0)
                return (current);
        }
        current--;
    }   
    return (1);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("\n");
        return (0);
    }
    unsigned int a = atoi(argv[1]);
    unsigned int b = atoi(argv[2]);
    unsigned int result = pgcd(a, b);

    printf("%d", result);
}