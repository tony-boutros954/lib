#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    int c = 0;
    if (n == -2147483648)
        {
            write(fd, "-2147483648", 11);
            return;
        }
    if (n < 0)
        {
            write(fd, "-", 1);
            n = -n; 
        }
    if (n >= 10)
        ft_putnbr_fd(n / 10, fd);
    c = (n % 10) + '0';
    write(fd, &c, 1);
}

int main(void)
{
    int n = -214;
    
    ft_putnbr_fd(n, 1);
    write(1, "\n", 1);
    return (0);
}