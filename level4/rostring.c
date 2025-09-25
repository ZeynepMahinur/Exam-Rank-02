#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        write (1, "\n", 1);
        return (0);
    }

    char *str = argv[1];
    int i = 0;
    int j;
    int start;
    int end;

    while (str[i] == 32 || str[i] == '\t')
        i++;
    start = i;
    while (str[i] && str[i] != 32 && str[i] != '\t')
        i++;
    end = i;

    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        if (!str[i])
            break;
        j = i;
        while (str[i] && str[i] != ' ' && str[i] != '\t')
            i++;
        write (1, str + j, i - j);
        write (1, " ", 1);
    }
    write (1, str + start, end - start);
    write (1, "\n", 1);
}