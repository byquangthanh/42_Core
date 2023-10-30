/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quanguye <quanguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:09:05 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/30 17:39:07 by quanguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int main(void)
{
    printf("%d\n", ft_isalpha('a'));
    printf("%d\n", ft_isalpha(60));
    return 0;
}
