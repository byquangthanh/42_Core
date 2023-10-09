#include <stdio.h>

int ft_isalpha(int c)
{
    if((c >= 65 && c <= 90) || (c >= 'a' && c <= 'z'))
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    printf("%d\n", ft_isalpha(65));
    printf("%d\n", ft_isalpha(60));
    return 0;
}