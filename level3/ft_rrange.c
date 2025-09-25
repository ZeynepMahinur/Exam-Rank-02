#include <stdlib.h>

int ft_abs(int nbr)
{
    if (nbr < 0)
        return (-nbr);
    return (nbr);
}

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int len = ft_abs(end - start) + 1;
    int *range = (int *)malloc(sizeof(int) * len);

    if (!range)
        return (NULL);
    while (i < len)
    {
        if (start <= end)
            range[i] = end - i;
        else
            range[i] = end + i; 
        i++;
    }
    return (range);
}

#include <stdio.h>

int main()
{
    int *arr = ft_rrange(1, 10);
    int len = (10 - 1) + 1;
    int i = 0;

    while (i < len)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    free(arr);
}