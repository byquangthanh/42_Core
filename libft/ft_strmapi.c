/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:58:05 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/31 17:56:53 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*ptr;
	unsigned int		i;

	ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
	i = 0;
	if(!ptr)
		return NULL;
	while(s[i] != '\0')
	{
		ptr = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
