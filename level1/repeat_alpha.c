#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int i = 0;
        int j;
        while (argv[1][i])
        {
            j = 0;
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                while (j < argv[1][i] - 64)
                {
                    write (1, &argv[1][i], 1);
                    j++;
                }
            }
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                while (j < argv[1][i] - 96)
                {
                    write (1, &argv[1][i], 1);
                    j++;
                }
            }
            else
                write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}