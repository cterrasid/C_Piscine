#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main(void)
{
    char    *a = "Clarette";
    char    *b = "Clare";
    char    *c = "clarette";
	printf("%s\n", "Mi funcion:");
    printf("s1 > s2: %i\n", ft_strcmp(a, b));
    printf("s1 > s2: %i\n", ft_strcmp(c, a));
    printf("s1 < s2: %i\n", ft_strcmp(b, a));
    printf("s1 == s2: %i\n", ft_strcmp(a, a));
    printf("\n%s\n", "Funcion original:");
	printf("s1 > s2: %i\n", strcmp(a, b));
    printf("s1 > s2: %i\n", strcmp(c, a));
    printf("s1 < s2: %i\n", strcmp(b, a));
    printf("s1 == s2: %i\n", strcmp(a, a));
    return (0);
}