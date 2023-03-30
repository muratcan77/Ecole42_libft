/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:06:30 by akarakay          #+#    #+#             */
/*   Updated: 2022/12/24 22:47:45 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	src_size;
	char	*str;

	src_size = ft_strlen(s);
	if (!s || src_size <= start || len == 0)
		return (ft_strdup(""));
	if (len >= (src_size - start + 1))
		str = malloc(sizeof(char) * (src_size - start + 1));
	else
		str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = 0;
	return (str);
}

/* kaynak dizinin içindeki belli bir kısmı farklı bir alana
 taşımak için kullanılır. örneğin (abdullah 2 3) için
 abdullah dizisinin içindeki dul kısmını malloc ile
 yeni açılan yere kopyayıp bu yerin başlangıç adresi döndürülür */
