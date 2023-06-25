/*
Write a function that returns the number of elements in the linked list that's
passed to it.
It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list
*/

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>


int	ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		++i;
	}
	return (i);
}

t_list *new(void *data)
{
	t_list *n;

	n = (t_list *)malloc(sizeof(t_list));
	if (n)
	{
		n->data = data;
		n->next = NULL;
	}
	return (n);
}

int main(void)
{
	t_list *p, *s, *j, *t;

	p = new("one");
	s = new("two");
	j = new("three");
	t = new("four");
	p->next = s;
	s->next = j;
	j->next = t;
	printf("%d\n", ft_list_size(p));
	return (0);
}