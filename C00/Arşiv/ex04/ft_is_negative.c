#include <unistd.h>

void	ft_is_negative(int n)
{
	char	test;

	if (n >= 0)
	{
		test = 'P';
	}
	else
	{
		test = 'N';
	}
	write(1, &test, sizeof(test));
}
