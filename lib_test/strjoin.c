#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    int total_length;
    char *buffer;

    if(s1 == NULL || s2 == NULL)
        return (NULL);

    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
        j++;
    total_length = i+j;
    buffer = (char *)malloc(total_length + 1);
    if (buffer == NULL)
        return (NULL);
    i = 0;
    j = 0;

        while (s1[i] != '\0')
        {
            buffer[i] = s1[i];
            i++;
        }
        while (s2[j] != '\0')
        {
            buffer[i] = s2[j];
            j++;
            i++;
        }
    buffer[total_length] = '\0';
    return (buffer);
}

int main(void)
{
    char *string1 = NULL;
    char *string2 = "boutros";
    char *res = ft_strjoin(string1, string2);

    if(res != NULL)
        printf("%s", res);
    else 
        printf("NULL");
    free(res);
    return 0;
}