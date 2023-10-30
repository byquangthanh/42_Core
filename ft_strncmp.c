/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:10:05 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/29 16:16:51 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, char *s2, size_t n)
{
    int i;

    i = 0;
    while((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
        if(s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (s1[i] - s2[i]);
}

// int main(void)
// {
//     char s1[] = "ahoj";
//     char s2[] = "ahoje";
//     printf("%d", ft_strncmp(s1, s2, 5));
// }
