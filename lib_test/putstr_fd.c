#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    if (s == NULL)
        return;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}

int main(void)
{
    char *string = "tony";
    ft_putstr_fd(string, 1);
    ft_putstr_fd("\n", 1);
    return (0);
}