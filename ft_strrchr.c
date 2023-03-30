/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:43:26 by akarakay          #+#    #+#             */
/*   Updated: 2022/12/11 15:45:11 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int a)
{
	int	i;

	i = (int)ft_strlen(str) + 1;
	while (i--)
	{
		if ((char)a == *(str + i))
			return ((char *)(str + i));
	}
	return (0);
}

/*int a nın ascii karşılığını str dizisinin 
 içinde son bulduğu yerin adresini döndürür*/
