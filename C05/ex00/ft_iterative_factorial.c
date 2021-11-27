int	ft_iterative_factorial(int nb)
{
	int	fak;

	fak = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		fak *= nb--;
	return (fak);
}
