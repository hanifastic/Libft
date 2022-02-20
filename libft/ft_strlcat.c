/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsisman <hsisman@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:06:21 by hsisman           #+#    #+#             */
/*   Updated: 2022/02/18 02:08:32 by hsisman          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
		dest[j] = '\0';
	return (dlen + slen);
}

// dest'in yanına src'yi ekler fakat ekleme yaparken size
// dest'in uzunluğundan sayarak başlar
// bu nedenlse size - dlen yapıyoruz
// -1 yaparak bir eksik karakter alıyoruz ki
// dest'in sonuna null karakteri de ekleyebilelim
// -1 yapmasaydık 1 karakter fazla alıp NULL u da ekleyecekti
// ve bu sefer istediğimizden 1 fazla karakter kopyalamış olacaktı
