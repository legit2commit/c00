#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}
/*take out comment below to compile & run*/
/*

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
