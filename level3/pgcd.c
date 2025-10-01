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


/*#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return (a);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("\n");
        return (0);
    }

    int i = 0;
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    if (a > 0 && b > 0)
        printf("%d", pgcd(a, b));
    printf("\n");
}*/