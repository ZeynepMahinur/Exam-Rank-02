#include <stdlib.h>

int count_len(int nbr)
{
    int len = 0;
    long n = nbr;

    if (n <= 0)
        len++;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int nbr)
{
    int len = count_len(nbr);
    long n = nbr;
    char *str = malloc(len + 1);

    if (!str)
        return (NULL);
    str[len] = '\0';
    if (n == 0)
        str[0] = '0';
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while (n > 0)
    {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }
    return (str);
}
#include <stdio.h>
int main()
{
    char *result = ft_itoa(-12);
    printf("%s", result);
}