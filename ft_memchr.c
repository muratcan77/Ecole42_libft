/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:26:11 by akarakay          #+#    #+#             */
/*   Updated: 2022/12/24 22:37:23 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int x, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)x)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}

/* str içinde n inci veriye kadar x in char karşılığını karşılaştırır 
bulduğu ilk noktanın adresini döndürür*/
