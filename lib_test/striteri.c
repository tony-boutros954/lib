#include <stdlib.h>
#include <stdio.h>

// static void alternate(unsigned int index, char *c)
// {
//     int i;

//     i = index;
//     if (i % 2 == 0)
//     {
//         if (*c >= 'a' && *c <= 'z')
//             *c = *c - 32;
//         else if(*c >= 'A' && *c <= 'Z')
//             *c = *c + 32;
//     }

// }

// void ft_striteri(char *s, void (*f)(unsigned int,char*))
// {
//     unsigned int i;

//     i = 0;
//     if (s == NULL)
//         return;
//     while (s[i] != '\0')
//     {
//         f(i, &s[i]);
//         i++;
//     }
// }

static void alternate(unsigned int index, char *c)
{
    int i;

    i = index;
    if (i % 2 == 0)
    {
        if (c[i] >= 'a' && c[i] <= 'z')
            c[i] = c[i] - 32;
        else if(c[i] >= 'A' && c[i] <= 'Z')
            c[i] = c[i] + 32;
    }

}

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    int i;

    i = 0;
    if (s == NULL)
        return;
    while (s[i] != '\0')
    {
        f(i, s);
        i++;
    }
}

int main(void)
{
    char string[] = "tony boutros";
    printf("%s\n", string);
    ft_striteri(string, alternate);
    printf("%s\n", string);
    return (0);
}