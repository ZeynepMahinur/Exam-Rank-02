#include <unistd.h>
#include <stdlib.h>

int ft_isspace(char c)
{
    if (c == 32 || (c >= 9 && c <= 13))
        return (1);
    return (0);
}

int main(int argc, char *argv[])
{
    int word = 0;
    int i = 0; 
    int j;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
            i++;
        i--;
        while (i >= 0)
        {
            while (i >= 0 && ft_isspace(argv[1][i]))
                i--;
            j = i;
            while (j >= 0 && !ft_isspace(argv[1][j]))
                j--;
            if (word)
                write (1, " ", 1);
            write (1, &argv[1][j + 1], i - j);
            word = 1;
            i = j;
        }
    }
    write (1, "\n", 1);
}