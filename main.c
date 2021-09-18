#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int ret = ft_printf("%d", -664);
	printf("\n");
	printf("%d", ret);
	printf("\n");
	ret = printf("%d", -664);
	printf("\n%d\n", ret);
	return (0);
}
