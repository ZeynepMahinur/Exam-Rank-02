#include <stdlib.h>

int ft_abs(int n)
{
    if (n < 0)  
        return (-n);
    return (n);
}

int     *ft_range(int start, int end)
{
    int i = 0;
    int len = ft_abs(end - start) + 1;
    int *range = (int *)malloc(sizeof(int) * len);

    while (i < len)
    {
        range[i] = start;
        if (start < end)
            start++;
        else
            start--;
        i++;
    }
    return (range);
}


#include <stdio.h>

int main()
{
    int *arr = ft_range(10, 1);
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