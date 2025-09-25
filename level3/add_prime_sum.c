#include <unistd.h>

int ft_isspace(int c)
{
    if (c == 32 || (c >= 9 && c <= 13))
        return (1);
    return (0);
}

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int ft_atoi(const char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    while (ft_isspace(str[i]))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (ft_isdigit(str[i]))
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int nbr)
{
    if (nbr > 9)
        ft_putnbr(nbr / 10);
    ft_putchar((nbr % 10) + '0');
}

int isprime(int nbr)
{
    int i = 2;

    if (nbr < 2)
        return (0);
    while (i <= nbr / 2)
    {
        if (nbr % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char *argv[])
{
    if (argc != 2 || ft_atoi(argv[1]) <= 0)
    {
        write (1, "0", 1);
        write (1, "\n", 1);
        return (0);
    }

    int nbr = ft_atoi(argv[1]);
    int i = 0;
    while (nbr > 1)
    {
        if (isprime(nbr))
            i += nbr;
        nbr--;
    }
    ft_putnbr(i);
    ft_putchar('\n');
}