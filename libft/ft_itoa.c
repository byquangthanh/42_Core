/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:10:13 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/29 16:02:48 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int length(int n) {
    int length = 0;
    while (n != 0) {
        n /= 10;
        length++;
    }
    return (length);
}

char *handle_zero() {
    char *ptr;

    ptr = (char *)malloc(2 * sizeof(char));
    if (!ptr)
    {
        return NULL;
    }
    ptr[0] = '0';
    ptr[1] = '\0';
    return (ptr);
}

char *ft_itoa(int n) {
    int is_negative;
    int i;
    int length_str;
    char *ptr;

    if (n == 0)
    {
        return handle_zero();
    }
    is_negative = 0;
    if (n < 0)
    {
        is_negative = 1;
        n = -n;
    }
    length_str = length(n);
    ptr = (char *)malloc((length_str + is_negative + 1) * sizeof(char));
    if(!ptr)
    {
        return NULL;
    }
    ptr[length_str + is_negative] = '\0';
    i = length_str - 1;
    while(i >= 0)
    {
        ptr[i + is_negative] = '0' + (n % 10);
        n /= 10;
        i--;
    }
    if(is_negative)
    {
        ptr[0] = '-';
    }
    return (ptr);
}


// int main(void)
// {
//     printf("%s\n", ft_itoa(-10001));
//     printf("%s\n", ft_itoa(10001));
//     printf("%s\n", ft_itoa(0));
//     printf("%s", ft_itoa(-233));
//     return 0;
// }
