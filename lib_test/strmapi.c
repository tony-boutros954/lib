#include <stdio.h>
#include <stdlib.h>

static char alternate(unsigned int index, char c)
{
    if (index % 2 == 0)
    {
        if (c >= 'a' && c <= 'z')
            return (c - 32);
        else if (c >= 'A' && c <= 'Z')
            return (c + 32);
    }
    return (c);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int counter;
    int i;
    char *res;

    i = 0;
    counter = 0;
    if (s == NULL)
        return (NULL);
    
    while (s[counter] != '\0')
    {
        counter++;
    }
    res = (char *)malloc(counter + 1);
    if (res == NULL)
        return (NULL);
    while (i < counter)
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[counter] = '\0';
    return (res);
}

int main(void)
{
    char *string = "tony boutros";
    char *res = ft_strmapi(string, alternate);
    printf("%s\n", res);
    free(res);
    return (0);
}