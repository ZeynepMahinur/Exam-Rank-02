#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 4)
    {
        switch(argv[2][0])
        {
            case '+':
                printf("%d", atoi(argv[1]) + atoi(argv[3]));
                break;
            case '-':
                printf("%d", atoi(argv[1]) - atoi(argv[3]));
                break;
            case '/':
                printf("%d", atoi(argv[1]) / atoi(argv[3]));
                break;
            case '%':
                printf("%d", atoi(argv[1]) % atoi(argv[3]));
                break;
            case '*':
                printf("%d", atoi(argv[1]) * atoi(argv[3]));
                break;
            i++;
        }
    }
    printf("\n");
}