int		max(int* tab, unsigned int len)
{
    if (len == 0)
        return(0);
    int i = 0;
    int result = tab[0];
    while (i < len)
    {
        if (tab[i] > result)
            result = tab[i];
        i++;
    }
    return (result);
}