/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:35:19 by akarakay          #+#    #+#             */
/*   Updated: 2022/12/24 22:19:32 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2,	size_t n)
{
	size_t	i;
	int		farklilik;

	i = 0;
	farklilik = 0;
	while (farklilik == 0 && s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		farklilik = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (farklilik == 0 && (s1[i] != '\0' || s2[i] != '\0') && (i < n))
		farklilik = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (farklilik);
}

/*iki diziyi n inci elemanlarına kadar karşılaştırır
karşılaştırılan diziler arasında fark yoksa 0 döndürür*/
