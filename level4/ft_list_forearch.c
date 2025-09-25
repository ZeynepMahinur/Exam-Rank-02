#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_ *current = begin_list;

    while (current)
    {
        (*f)(current->data);
        current = current->next;
    }
}

#include <stdio.h>

void print_data(void *data)
{
    printf("%s\n", (char *)data);
}

int main()
{
    t_list node1, node2;

    node1.data = "Hello";
    node2.data = "World";

    node1.next = &node2;
    node2.next = NULL;

    ft_list_foreach(&node1, print_data);
}