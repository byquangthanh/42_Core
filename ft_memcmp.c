/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quanguye <quanguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:37:07 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/30 17:23:51 by quanguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const char* ptr;
	const char* ptr2;


	ptr = s1;
	ptr2 = s2;
	i = 0;
	while(ptr[i] != '\0' && ptr2[i] != '\0')
	{
		if(ptr[i] != ptr2[i])
		{
			return(ptr[i] - ptr2[i]);
		}
		i++;
	}
	return(ptr[i] - ptr2[i]);
}
