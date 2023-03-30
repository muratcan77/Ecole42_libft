/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:51:44 by akarakay          #+#    #+#             */
/*   Updated: 2022/10/28 12:58:27 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	unsigned int	sonuc;
	int				np;
	int				i;

	sonuc = 0;
	np = 1;
	i = 0;
	while (str[i] && ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			np = np * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		sonuc = sonuc * 10;
		sonuc = sonuc + (str[i++] - '0');
	}
	if (sonuc > 2147483647 && np == 1)
		return (-1);
	if (sonuc > 2147483648 && np == -1)
		return (0);
	return (sonuc * np);
}
