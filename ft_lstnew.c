#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *new;

    new = malloc(sizeof(t_list));
    if (new == NULL)
        return (NULL);
    if (content == NULL)
       new->content = NULL;
    else 
        new->content = content;
    new->next = NULL;
    return (new);
    
}

/*int main()
{
    int a = 3;
    t_list  *p = ft_lstnew(&a);
    printf("%d et %p\n", (*(int*)p->content), p);
    //*(int*)p->content : on caste le pointeur vide sous forme de pointeur int
    // avec (int*) et ajoute * devant pour déréférencer
}*/