/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:09:20 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/29 16:01:55 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            return (char *)&s[i];
        }
        i++;
    }
    return (NULL);
}

// int main() {
//     const char *text = "Hello, World!";
//     char target = 'o';

//     char *result = ft_strchr(text, target);

//     if (result != NULL) {
//         printf("Found '%c' at position: %ld\n", target, result - text + 1);
//     } else {
//         printf("'%c' not found in the string.\n", target);
//     }

//     return 0;
// }
