#include <stdio.h>

int ft_isdigit(int c)
{
    if(c <= '9' && c >= '0')
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    printf("%d\n", ft_isdigit(49));
    printf("%d\n", ft_isdigit(60));
    return 0;
}