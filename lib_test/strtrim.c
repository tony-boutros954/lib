#include <stdio.h>
#include <stdlib.h>

static int IntSet(char c, char *setcheck)
{
    int i = 0;
    while (set[i] != '\0')
    {
        if (c == set[i])
            return 1;
        i++;
    }
    return 0;
}

static int lencheck(*string)
{
    int i = 0;

    while (string)
        i++;
    return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int test;

    start = 0;
    while(s1 != '\0')
    {
        test = IntSet(s1[start], set);
        if (test = 1)
            continue;
        else
            break;
        start++;
    }
    end = lencheck(s1);
    while (end > 0)
    {
        test = IntSet(s1[end], set);
        if (test = 1)
            continue;
        else
            break;
        end--;
    }

}

int main(void)
{
    
}
//xytracerxy
//xy