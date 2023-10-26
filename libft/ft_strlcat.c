/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:09:42 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/26 15:25:55 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while(dst[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0' && j < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return i;
}

int main(void)
{
    char str[] = "hello";
    char str1[] = " world";
    int size = ft_strlcat(str, str1, 3);

    printf("Concetated String: %s\n", str);
    printf("Length of Copied String: %d\n", size);
    return 0;
}