
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include "ft_printf.h"

#define TEST(fmt, ...) do { \
	fprintf(stderr, "\n--- %s ---\n", fmt); \
	fprintf(stderr, "printf:    "); \
	ret1 = printf(fmt, __VA_ARGS__); \
	fflush(stdout); \
	fprintf(stderr, " [return: %d]\n", ret1); \
	fprintf(stderr, "ft_printf: "); \
	ret2 = ft_printf(fmt, __VA_ARGS__); \
	fprintf(stderr, " [return: %d]\n", ret2); \
} while (0)


int	main(void)
{
	int		ret1;
	int		ret2;
	int		n;
	void	*ptr;

	n = 42;
	ptr = &n;

	/* Signed integers */
	TEST("%d\n", 0);
	TEST("%d\n", -1);
	TEST("%d\n", INT_MAX);
	TEST("%d\n", INT_MIN);
	TEST("%i\n", 2147483647);

	/* Unsigned integers */
	TEST("%u\n", 0u);
	TEST("%u\n", UINT_MAX);
	TEST("%u\n", 4294967295u);

	/* Hexadecimal */
	TEST("%x\n", 0u);
	TEST("%x\n", 255u);
	TEST("%x\n", UINT_MAX);
	TEST("%X\n", 255u);
	TEST("%X\n", UINT_MAX);

	/* Characters and strings */
	TEST("%c\n", 'A');
	TEST("%c\n", 0);
	TEST("%s\n", "");
	TEST("%s\n", "Hello, world!");
	TEST("%s\n", (char *)NULL);

	/* Pointers */
	TEST("%p\n", ptr);
	TEST("%p\n", (void *)NULL);

	/* Mixed conversions */
	TEST("%d %u %x %X %c %s %%\n",
		-42, 42u, 255u, 255u, 'A', "Hello");

	return (0);
}

