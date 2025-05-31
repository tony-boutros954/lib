#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i = 0;
    size_t length = 0;
    char *buffer;

    if (s == NULL)
        return NULL;
    while (s[i] != '\0')
    {
        if (i >= start && length < len)
            length++;
        if (len == length)
            break;
        i++;
    }

    buffer = (char *)malloc(length + 1);

    if (buffer == NULL)
        return (NULL);

    i = 0;
    while(i < length)
    {
        buffer[i] = s[start + i];
        i++;
    }

    buffer[length] = '\0';

    return (buffer);

}

int main(void)
{
    char *string = "tony";
    int index = 5;
    int size = 1;

    char *res = ft_substr(string, index, size);
if (res != NULL)
    {
        printf("Result: '%s'\n", res);
        free(res);
    }
    else
        printf("failed");
    return 0;
}