/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:48:33 by akarakay          #+#    #+#             */
/*   Updated: 2022/12/24 22:22:56 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*nstr;
	size_t	n;

	n = ft_strlen(str);
	nstr = (char *)malloc(n + 1);
	if (!(nstr))
		return (NULL);
	ft_memcpy(nstr, str, n + 1);
	return (nstr);
}

/*kopyalanacak ifadenin uzunluğu kadar yeni alan açılır bu alana kopyalanır 
yeni oluşturulan alanın başlangıç adresi döndürülür */
