/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:55:21 by akarakay          #+#    #+#             */
/*   Updated: 2022/12/24 23:13:59 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		size_dst;
	size_t		size_src;

	i = 0;
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	j = size_dst;
	if (size_dst < size - 1 && size > 0)
	{
		while (src[i] && size_dst + i < size - 1)
		{	
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (size_dst >= size)
		size_dst = size;
	return (size_dst + size_src);
}
