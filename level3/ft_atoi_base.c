int ft_isspace(char c)
{
    if (c == 32 || (c >= 9 && c <= 13))
        return (1);
    return (0);
}

int ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int ft_isvalid(char c, int baselen)
{
    char *ucbase = "0123456789ABCDEF";
    char *lcbase = "0123456789abcdef";
    int i = 0;

    while (i < baselen)
    {
        if (c == ucbase[i] || c == lcbase[i])
            return (1);
        i++;
    }
    return (0);
}

int ft_atoi_base(const char *str, int str_base)
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
    while (str[i] && ft_isvalid(str[i], str_base))
    {
        result *= str_base;
        if (ft_isdigit(str[i]))
            result += str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            result += str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            result += str[i] - 'A' + 10;
        i++;
    }
    return (result * sign);
}

#include <stdio.h>

int main()
{
    int result = ft_atoi_base("101", 2);
    printf("%d", result);
}