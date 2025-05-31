#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
    size_t len;
    char *dup;
    size_t i;

    len = 0;
    i = 0;
    if (src == NULL)
        return  NULL;

    while (src[len] != '\0')
        len++;

    dup = (char *)malloc(len + 1);

    while (i <= len)
    {
        dup[i] = src[i];
        i++;
    }

    return (dup);
}

int main(void)
{
    char *string = "ton$ b0outro$";
    char *test = ft_strdup(string);

    if (test == NULL)
        printf("%s\n", "null");

    printf("%s\n", test);
    free(test);
    return (0);
}