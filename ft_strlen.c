/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:43:26 by akarakay          #+#    #+#             */
/*   Updated: 2022/10/20 19:10:36 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i_harfsayisi;

	i_harfsayisi = 0;
	while (str[i_harfsayisi] != '\0')
	{
		i_harfsayisi++;
	}
	return (i_harfsayisi);
}
