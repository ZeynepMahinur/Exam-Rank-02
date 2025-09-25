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

void    print_hex(int nb)
{
    char *base = "0123456789abcdef";
    
    if (nb >= 16)
        print_hex(nb / 16);
    ft_putchar((base[nb % 16]));
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write (1, "\n", 1);
        return (0);
    }

    int nbr = ft_atoi(argv[1]);
    print_hex(nbr);
    write (1, "\n", 1);
    return (0);
}