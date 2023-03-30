/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:04:53 by akarakay          #+#    #+#             */
/*   Updated: 2022/12/24 22:45:59 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	word_counter(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s)
		return (0);
	split = (char **)malloc((word_counter (s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	start = 0;
	end = 0;
	i = 0;
	while (i < word_counter (s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		split[i++] = ft_substr(s, start, (end - start));
		start = end;
	}
	split[i] = 0;
	return (split);
}

/*word counter ayrılacak toplam veri kümesi sayısını bulur.
malloc ile bu verilerin tutulacağı dizi adresleri için 
yer açılır. ayırıcı karakterden sonraki ilk karakter başlangıç karakteridir
ve bir sonraki ayırıcı karakterden bir önceki karakter ise son karakterdir.
substr ile başlangıç ile son karakter arasındaki karakterler ilk ve son dahil
yeni oluşturulan bellek alanına kopyalanır ve bu bellek alanının başlangıç 
adresi split isminde oluşturulmuş adres dizisinin ilgili indexine yazılır.
word counter başta uygulanıp her seferinde çalışmasa güzel olur fakat 
25 satır kuralı için bu şekilde yazdım*/

int main(void)
{
	char *str = "qwdj4fwd34f4qdwd4eq";
	char a = '4';
	char **res;
	res = ft_split(str,a);
	printf("%s\n",res[0]);
	printf("%s\n",res[1]);
	printf("%s\n",res[2]);
	printf("%s\n",res[3]);
}
