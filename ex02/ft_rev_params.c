#include <unistd.h>

void	ft_putstr (char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main (int argc, char *argv[])
{
	int	i;

	i = argc;
	while (i <= argc && i > 1)
	{
		i--;
		ft_putstr(argv[i]);
		ft_putstr("\n");
	}
	return (0);
}
