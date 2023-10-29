/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:08:54 by sixshooterx       #+#    #+#             */
/*   Updated: 2023/10/29 16:02:53 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int atoi(const char *str)
{
    int i;
    int sum;
    int neg;

    neg = 1;
    sum = 0;
    i = 0;
    while(str[i] == ' ')
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while(str[i] <= '9' && str[i] >= '0')
    {
        sum *= 10;
        sum += str[i] - '0'; 
        i++;
    }
    return (sum * neg);
}

// int main(void)
// {
//     printf("%d", atoi("     -0203wd330 as"));
//     return 0;
// }
