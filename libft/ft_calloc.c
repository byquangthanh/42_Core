/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:08:48 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/26 15:25:42 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_calloc(size_t count, size_t size)
{
    void *ptr = malloc(count * size);

    if (ptr != NULL)
    {
        ft_memset(ptr, 0, count * size);
    }
    return ptr;
}