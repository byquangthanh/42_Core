/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:10:02 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/26 15:25:56 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    int i;

    i = 0;
    while (src[i] != '\0' && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return i;
}


int main() {
    char source[] = "Hello, World!";
    char destination[20]; 
    size_t length = ft_strlcpy(destination, source, 30);

    // Print the copied string and its length
    printf("Copied String: %s\n", destination);
    printf("Length of Copied String: %zu\n", length);

    return 0;
}