unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int current;

    if (a == 0 || b == 0)
        return (0);

    if (a > b)
        current = a;
    else
        current = b;
    while (1)
    {
        if (current % a == 0)
        {
            if (current % b == 0)
                return (current);
        }
        current++;
    }
}


/*
unsigned int pgcd(unsigned int a, unsigned int b)
{
    unsigned int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return (a);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return (0);
    return (a / pgcd(a, b) * b);
}

#include <stdio.h>

int main()
{
    unsigned int result = lcm(12, 18);
    printf("%d\n", result);
}*/