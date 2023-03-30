/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:30:01 by akarakay          #+#    #+#             */
/*   Updated: 2022/12/24 22:34:09 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int x, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = (unsigned char)x;
		i++;
	}
	return (dest);
}

/* x in ascii karşılığı olan karakteri destin başından başlayarak
n kadarına yazar örneğin abdullah x 3 xxxullah */
