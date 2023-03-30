/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:52:06 by akarakay          #+#    #+#             */
/*   Updated: 2023/01/07 12:47:25 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long n, long np)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	if (np < 0)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	np;
	long	number;

	if (n < 0)
		np = -1;
	else
		np = 1;
	number = n * np;
	len = int_len (number, np);
	str = (char *) malloc (sizeof (char) * len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = (number % 10) + 48;
		number = number / 10;
	}
	if (np == -1)
		str[0] = '-';
	return (str);
}
