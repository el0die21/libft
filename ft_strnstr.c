#include "libft.h"

char    *ft_strnstr(const char *str, const char *to_find, size_t len)
{
    size_t  i;
    size_t  j;

    if (*to_find == '\0')
        return ((char *)str);
     i = 0;
     while (str[i] && i < len)
     {
        j = 0;
            if(str[i] == to_find[j])
            {
                while (str[i + j] == to_find[j])
                {
                    j++;
                        if (to_find[j] == '\0')
                            return ((char *)&str[i]);
            } 
        }
        i++;
     }  
     return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *l = "foo bar baz";
	const char *s = "bar";
	char *ptr;
	ptr = ft_strnstr(l, s, 18);
    if (ptr == NULL)
        {
            printf("le pointeur est nul\n");
            return (0);
        }
	printf("%s\n", ptr);
	return (0);
}*/