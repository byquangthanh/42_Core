/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:09:16 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/29 16:02:45 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}


// int main() {
//     char source[] = "Hello, World!";
//     char destination[20];

//     // Using ft_memmove to move the characters from index 7 to the end of the string to index 0 onwards
//     ft_memmove(destination, source + 7, strlen(source + 7) + 1);

//     printf("Modified string: %s\n", destination); // Output: "Modified string: World!"

//     return 0;
// }
