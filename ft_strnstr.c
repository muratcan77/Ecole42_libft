/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:36:08 by akarakay          #+#    #+#             */
/*   Updated: 2022/12/24 22:48:34 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int		i;
	int		j;
	size_t	findlen;

	findlen = ft_strlen(to_find);
	i = 0;
	if (to_find[i] == 0 || !findlen)
		return ((char *)str);
	while (str[i] != '\0' && findlen <= n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
		n--;
	}
	return (0);
}

/*strstrden farklı olarak kaynak dizinin tamamında değil n ile 
belirtilen uzunluğun içinde arama yapar to_find ile belirtilen
dizinin tam eşleştiği noktanın başlangıcını döndürür*/
