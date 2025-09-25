#include <stdlib.h>
#include "list.h"

int ascending(int a, int b)
{
	return (a <= b);
}

t_list *new_node(int value)
{
    t_list *node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->data = value;
    node->next = NULL;
    return (node);
}

//ana fonksiyon lazım olan
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int tmp;
    t_list *head;

    head = lst;
    if (!lst)
        return (NULL);
    while (lst && lst->next)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = head;
        }
        else
            lst = lst->next;
    }
    return (head);
}

#include <stdio.h>
int main()
{
    t_list *a = new_node(4);
    t_list *b = new_node(1);
    t_list *c = new_node(77);
    t_list *d = new_node(10);

    a->next = b;
    b->next = c;
    c->next = d;
    t_list *sorted = sort_list(a, ascending);
    t_list *tmp = sorted;
    while (tmp)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}