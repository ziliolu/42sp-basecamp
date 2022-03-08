
#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char src[6] = {'V', 'i', 'l', 'a'};
	char dest[6];
	printf("dest: %s\n", dest);
	printf("src:  %s\n", src);
	ft_strncpy(dest, src, 4);
	printf("dest: %s\n", dest);
}