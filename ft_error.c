#include "libft.h"

void	ft_error(char *message, int exit_code)
{
	ft_putendl_fd(message, 1);
	exit(exit_code);
}
