/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:09:13 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/29 16:02:46 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void * ft_memcpy (void *restrict dst, const void *restrict src, size_t n)
{
    char* ptr = dst;
    char* ptr2 = src;
    size_t i;

    while(i < n)
    {
        ptr[i] = ptr2[i];
        i++;
    }
    return (ptr);
}
