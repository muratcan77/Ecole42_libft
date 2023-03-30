/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:43:26 by akarakay          #+#    #+#             */
/*   Updated: 2022/12/11 15:28:54 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int a)
{
	while (*str != '\0' && (char)a != *str)
		str++;
	if ((char)a == *str)
		return ((char *)(str));
	return (0);
}

/*int a nın ascii karşılığını str dizisinin 
 * içinde ilk bulduğu yerin adresini döndürür*/
