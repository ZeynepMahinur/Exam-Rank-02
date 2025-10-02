#include <stdlib.h>
typedef struct    s_list
{
    struct s_list *next;
    int            data;
}                 t_list;

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *head;
    int tmp;

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

int ascending(int a, int b)
{
	return (a <= b);
}

#include <stdio.h>
int main()
{
    t_list a,b,c,d;

    a.data = 2, a.next = &b;
    b.data = 1, b.next = &c;
    c.data = 5, c.next = &d;
    d.data = 0, d.next = NULL;

    t_list *head;
    head = &a;
    head = sort_list(head, ascending);

    while (head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}