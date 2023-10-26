/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:09:40 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/26 15:25:53 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    int i;
    char *ptr;

    i = 0;
    ptr = (char*)malloc((ft_strlen(s1) + 1) * sizeof(char));
    if (ptr == NULL) {
        return NULL;
    }
    while(s1 != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}