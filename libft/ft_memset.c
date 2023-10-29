/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:09:18 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/29 16:02:44 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char *ptr = b;
    size_t i;

    i = 0;
    while(i < len)
    {
        ptr[i] = c;
        i++;
    }
    return (ptr);
}

// int main(void)
// {
//     char str[50];

//     ft_memset(str, 'x', 5);
//     printf("%s", str);
//     return 0;
// }
