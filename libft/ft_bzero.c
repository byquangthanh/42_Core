/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:08:59 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/29 16:02:52 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void bzero(void *s, size_t n)
{
    char    *ptr = s;
    size_t i;

    i = 0;
    while(i < n)
    {
        ptr[i] = 0;
        i++;
    }
}
