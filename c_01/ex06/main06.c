#include <stdio.h>

int	ft_strlen(char *str);

int main()
{
	char a[4] = "Ola";
	int f;
	f = ft_strlen(&a[0]);
	printf(" A palavra é %s e a qtd de caracteres é %d\n", a, f);
}