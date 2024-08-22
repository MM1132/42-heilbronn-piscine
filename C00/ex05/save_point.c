void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = 48;
	second = 49;
	third = 49;
	while (first != 55)
	{
		if (third < 57)
		{
			third++;
		}
		else if (second < 56)
		{
			second++;
			third = second + 1;
		}
		else if (first < 55)
		{
			first++;
			second = first + 1;
		}
		write(1, &first, 1);
		write(1, &second, 1);
		write(1, &third, 1);
		if (!(first == 55 && second == 56 && third == 57))
			write(1, ", ", 2);
	}
}
