#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr = b;
    int i;

    i = 0;
    while(i < len)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return ptr;
}

int main(void)
{
    char str[50];

    ft_memset(str, 'x', 5);
    printf("%s", str);
    return 0;
}