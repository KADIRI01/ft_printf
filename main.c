#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	
	
	ft_printf("Hello % World\n");
	printf("Hello % World\n");
	ft_printf("Mine: %\n");
	printf("Mine: %\n");
	int	ret = ft_printf("Hello % World\n");
	printf("%d", ret);
	
	return (0);
}