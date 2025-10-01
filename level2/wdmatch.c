#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int j = 0;

    if (argc == 3)
    {
        while (argv[1][i] && argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if (!argv[1][i])
        {
            i = 0;
            while (argv[1][i])
                write (1, &argv[1][i++], 1);
        }
    }
    write(1, "\n", 1);
}


/*başka bir çözüm

#include <unistd.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (*str++)
    {
        len++;
    }
    return (len);
}

int main(int argc, char *argv[])
{
    int i = 0;
    int j = 0;

    if (argc == 3)
    {
        while (argv[1][i] && argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if (!argv[1][i])
            write (1, argv[1], ft_strlen(argv[1]));
    }
    write (1, "\n", 1);
}*/