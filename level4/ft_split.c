#include <stdlib.h>

int ft_isspace(char c)
{
    if (c == 32 || (c >= 9 && c <= 13))
        return (1);
    return (0);
}

int count_words(char *str)
{
    int count = 0;

    while (*str)
    {
        while (*str && ft_isspace(*str))
            str++;
        if (*str && !ft_isspace(*str))
        {
            count++;
            while (*str && !ft_isspace(*str))
                str++;
        }
    }
    return (count);
}

char *copy_word(char *str, int len)
{
    char *word = malloc(len + 1);
    int i = 0;

    if (!word)
        return (NULL);
    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_split(char *str)
{
    int words = count_words(str);
    int w = 0;
    int len;
    char **result = malloc(sizeof(char *) * (words + 1));
    
    if (!result)
        return (NULL);
    while (*str)
    {
        while (*str && ft_isspace(*str))
            str++;
        if (*str && !ft_isspace(*str))
        {
            len = 0;
            while (str[len] && !ft_isspace(str[len]))
                len++;
            result[w] = copy_word(str, len);
            if (!result[w])
            {
                while (w--)
                    free(result[w]);
                free(result);
                return (NULL);
            }
            w++;
            str += len;
        }
    }
    result[w] = NULL;
    return (result);
}

#include <stdio.h>

int main()
{
    char **result = ft_split("Hello, world from 42");
    int i = 0;
    while (result[i])
    {
        printf("%s\n", result[i]);
        i++;
    }
}