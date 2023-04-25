#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long int    nb;
    char    c;

    nb = n;
    if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
    else if (nb >= 0 && nb < 10)
	{
        c = nb + 48;
		write (fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putnbr_fd((nb % 10), fd);
	}
}

/*#include <stdio.h>
int main()
{
    ft_putnbr_fd(-2147483648,1);
}*/