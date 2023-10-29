/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:04:58 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/26 18:38:47 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
    return NULL;
}

char *ft_strtrim(char const *s1, char const *set) {
    int start = 0;
    int end = ft_strlen(s1) - 1;

    while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
        start++;
    while (end > start && ft_strchr(set, s1[end]) != NULL)
        end--;
    int length = end - start + 1;
    char *ptr = (char *)malloc((length + 1) * sizeof(char));
    if (ptr == NULL)
        return NULL;
    int i;
    i = 0;
    while(i < length)
    {
        ptr[i] = s1[start + i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}

int main(void)
{
    char str[] = "  ahoj  ";
    printf("%s", ft_strtrim(str, " "));
    return 0;
}