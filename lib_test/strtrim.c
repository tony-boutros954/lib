#include <stdlib.h>
//#include <stdio.h>

static int intset(char const c, char const *set)
{
    int i;

    i = 0;
    while (set[i] != '\0')
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

static int find_start(char const *s1, char const *set)
{
    int start;

    start = 0;
    while (s1[start] != '\0' && intset(s1[start], set))
        start++;
    return (start);
}

static int find_end(char const *s1, char const *set, int len)
{
    int end;

    end = len - 1;
    while (end >= 0 && intset(s1[end], set))
        end--;
    return (end);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int len;
    char *str;
    int i;

    if (!s1 || !set)
        return (NULL);
    len = 0;
    while (s1[len] != '\0')
        len++;
    start = find_start(s1, set);
    end = find_end(s1, set, len);
    if (end >= start)
        len = end - start + 1;
    else
        len = 0;
    str = (char *)malloc(len + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (i < len)
        str[i++] = s1[start++];
    str[len] = '\0';
    return (str);
}

int main(void)
{
    char *string = "xytracerxy";
    char *set = "xy";
    char *res = ft_strtrim(string, set);
    printf("%s\n", res);
    free(res);
    return 0;
}