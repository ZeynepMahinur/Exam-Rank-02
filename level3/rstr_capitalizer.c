#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_isspace(char c)
{
    if (c == 32 || (c >= 9 && c <= 13))
        return (1);
    return (0);
}

void rstr_capitalizer(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == '\0' || ft_isspace(str[i + 1])))
            str[i] -= 32;
        ft_putchar(str[i++]);
    }
}

int main(int argc, char *argv[])
{
    
    if (argc == 1)
    {
        write (1, "\n", 1);
        return (0);
    }
    int i = 1;
    while (i < argc)
    {
        rstr_capitalizer(argv[i]);
        write (1, "\n", 1);
        i++;
    }
}