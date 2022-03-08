#include <stdio.h>
char *ft_strcapitalize(char *str);

int main()
{
	char str[] = "oi, tudo bem? 42palAvras quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(str);
	printf("%s\n", str);
}