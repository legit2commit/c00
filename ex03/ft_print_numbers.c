#include <unistd.h>

void	ft_print_numbers(void)
{
	int	number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}
/*take out comment below to compile & run*/
/*

int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
