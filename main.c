#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i;
	int j;
	char *a;

	a = NULL;

	i = ft_printf("%x\n", -1);
	printf("%d\n", i);
	j = printf("%x\n",-1);
	printf("%d\n", j);
}
