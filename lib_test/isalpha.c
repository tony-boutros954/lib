#include <stdio.h>

int ft_isalpha(int c)
{
    if((c >= 'a' && c <= 'z') || ((c >= 'A' && c <= 'Z')))
        return 1;
    return 0;
}

int main()
{
    printf("%d\n", ft_isalpha('1'));
    return 0;
}