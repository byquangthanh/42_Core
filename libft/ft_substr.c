/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:10:12 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/29 16:16:51 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char* ptr;

    ptr = (char *)malloc((len + 1) * sizeof(char));
    i = 0;
    if(ptr == NULL)
        return NULL;
    while(s[start + i] != '\0' && i < len)
    {
        ptr[i] = s[i + start];
        i++;
    }
    ptr[len] = '\0';
    return (ptr);
}

// int main(void)
// {
//     char str[] = "Hello Bro";
//     printf("%s", ft_substr(str, 2, 9));
// }
