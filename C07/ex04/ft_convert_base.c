#include <stdio.h>

// Return -1 if invalid, else return base length
int	validate_base(char *base)
{
	int	first_index;
	int	second_index;

	first_index = 0;
	while (base[first_index])
	{
		if (base[first_index] == '-' || base[first_index] == '+')
			return (-1);
		second_index = 1;
		while (base[first_index + second_index])
		{
			if (base[first_index] == base[first_index + second_index])
				return (-1);
			second_index++;
		}
		first_index++;
	}
	if (first_index <= 1)
		return (-1);
	return (first_index);
}

// Return index or -1 if doesn't exist
int	get_index_in_base(char *base, char c)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

char	*convert_to_output_number(
	char *nbr, char *base_from, char *base_to, int is_negative
)
{
	int		base_from_length;
	int		base_to_length;

	base_from_length = validate_base(base_from);
	base_to_length = validate_base(base_to);
	if (base_from_length == -1 || base_to_length == -1)
		return (NULL);
	while (*nbr)
	{
		
		nbr++;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		is_negative;

	while (*nbr == ' ')
		nbr++;
	is_negative = 1;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			is_negative *= -1;
		nbr++;
	}
	return (convert_to_output_number(nbr, base_from, base_to, is_negative));
}

int	main(void)
{
	char	number_from[] = "AF";
	char	base_from[] = "0123456789ABCDEF";
	char	base_to[] = "0123456789";

	char	number_to[] = ft_convert_base(number_from, base_from, base_to);
	printf("%s => %s\n", number_from, number_to);

	return (0);
}
