/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:35:19 by akarakay          #+#    #+#             */
/*   Updated: 2022/12/17 17:35:46 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*dest;

	dest = (void *)malloc(n * size);
	if (!dest)
		return (0);
	ft_bzero(dest, n * size);
	return (dest);
}

/* calloc mallocdan farklı olarak açılan alanın içi tamamen boş */
