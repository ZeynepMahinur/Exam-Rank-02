#include <unistd.h>

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

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
        write (1, &str[i++], 1);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write (1, "\n", 1);
        return (0);
    }

    int i = 1;
    int number = ft_atoi(argv[1]);

    if (argc == 2)
    {
        while (i < 10)
        {
            ft_putnbr(i);
            ft_putstr(" x ");
            ft_putnbr(number);
            ft_putstr(" = ");
            ft_putnbr(i * number);
            write (1, "\n", 1);
            i++;
        }
    }
}