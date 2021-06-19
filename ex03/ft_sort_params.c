#include <unistd.h>

void	ft_putstr (char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*ione;
	unsigned char	*itwo;

	ione = (unsigned char *)s1;
	itwo = (unsigned char *)s2;
	while ((*ione == *itwo) && *ione)
	{
		ione++;
		itwo++;
	}
	return (*ione - *itwo);
}

void	ft_sort_tab(int argc, char *argv[])
{
	int		ione;
	char	*swap;

	ione = 1;
	while (ione < (argc - 1))
	{
		if (ft_strcmp(argv[ione], argv[ione + 1]) > 0)
		{
			swap = argv[ione];
			argv[ione] = argv[ione + 1];
			argv[ione + 1] = swap;
			ione = 0;
		}
		else
			ione++;
	}
}

int	main(int argc, char *argv[])
{
	int	ione;

	ione = 1;
	ft_sort_tab(argc, argv);
	while (ione < argc)
	{
		ft_putstr(argv[ione]);
		write(1, "\n", 1);
		ione++;
	}
}
