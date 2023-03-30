/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:50:05 by akarakay          #+#    #+#             */
/*   Updated: 2022/12/17 12:50:23 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
}

/*gösterilen adresten başlayarak istenilen uzunlukta null yazıyor 
örneğin abdullah 3   \0\0\0ullah yeni oluşturulmuş hafıza alanlarının
içini boşaltmak için kullanılacak calloc gibi*/