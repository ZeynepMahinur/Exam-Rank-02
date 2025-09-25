int		max(int* tab, unsigned int len)
{
    int i = 0;
    int count = 0;
    int result = 0;

    while (count < len)
    {
        if (tab[i] > result)
            result = tab[i];
        i++;
        count++;
    }
    return (result);
}