#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*total;

	i = 0;
	if (min >= max)
		return (0);
	total = malloc(sizeof(int) * (max - min) - 1);
	while (min < max)
	{
		total[i] = min;
		min++;
		i++;
	}
	*range = total;
	return (i);
}
