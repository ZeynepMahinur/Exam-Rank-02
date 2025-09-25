#include <stddef.h>

char ft_strlen(char *str)
{
    int len = 0;
    while (*str++)
        len++;
    return (len);
}

char    *ft_strrev(char *str)
{
    size_t i = 0;
    size_t j = ft_strlen(str) - 1;
    char tmp;

    while (i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return (str);
}
#include <stdio.h>
int main()
{
    char str[15]= "Hello world";
    char *result = ft_strrev(str);
    printf("%s", result);
}