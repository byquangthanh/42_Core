/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quanguye <quanguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:10:13 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/30 17:49:32 by quanguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length(int n)
{
	int	length;

	length = 0;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*handle_zero(void)
{
	char	*ptr;

	ptr = (char *)malloc(2 * sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	ptr[0] = '0';
	ptr[1] = '\0';
	return (ptr);
}

void	convert_int_to_str(char *ptr, int n, int is_negative)
{
	int	length_str;

	length_str = length(n) - 1;
	while (length_str >= 0)
	{
		ptr[length_str + is_negative] = '0' + (n % 10);
		n /= 10;
		length_str--;
	}
}

char	*min_int(void)
{
	char	*ptr;

	ptr = (char *)malloc(12);
	ptr[0] = '-';
	ptr[1] = '2';
	ptr[2] = '1';
	ptr[3] = '4';
	ptr[4] = '7';
	ptr[5] = '4';
	ptr[6] = '8';
	ptr[7] = '3';
	ptr[8] = '6';
	ptr[9] = '4';
	ptr[10] = '8';
	ptr[11] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		is_negative;
	int		length_str;
	char	*ptr;

	is_negative = 0;
	if (n == -2147483648)
		return (min_int());
	if (n == 0)
		return (handle_zero());
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	length_str = length(n);
	ptr = (char *)malloc((length_str + is_negative + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	convert_int_to_str(ptr, n, is_negative);
	if (is_negative)
		ptr[0] = '-';
	return (ptr);
}

// int main(void)
// {
//     printf("%s\n", ft_itoa(-1000451));
// 	printf("%s\n", ft_itoa(-1));
// 	printf("%s\n", ft_itoa(1));
//     printf("%s\n", ft_itoa(10001));
//     printf("%s\n", ft_itoa(0));
//     printf("%s", ft_itoa(-2147483648));
//     return 0;
// }
