void sort_int_tab(int *tab, unsigned int size)
{
    int tmp;
    unsigned int i;
    unsigned int j;

    i = 0;
    while (i < size - 1)
    {
        j = i;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

#include <stdio.h>

int main()
{
    int arr[] = {0, 10, 9, 3, 5};
    unsigned int i = 0;
    sort_int_tab(arr, 5);
    while (i < 5)
    {
        printf("%d\n", arr[i]);
        i++;
    }
}