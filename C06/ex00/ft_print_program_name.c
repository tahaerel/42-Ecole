#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*charptr;

	charptr = str;
	while (*charptr != 0)
	{
		write(1, charptr, 1);
		charptr++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	ft_putstr(argv[0]);
	(void)argc;
	return (0);
}
