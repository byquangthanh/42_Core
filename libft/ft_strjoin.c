/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:46:29 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/26 15:26:49 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char* ptr;
    int i;
    int j;

    ptr = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
    i = 0;
    j = 0;
    while(s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }
    while(s2[j] != '\0')
    {
        ptr[i + j] = s2[j];
        j++;
    }
    ptr[i + j] = '\0';
    return ptr;
}