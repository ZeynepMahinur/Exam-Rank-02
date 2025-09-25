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