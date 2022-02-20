/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsisman <hsisman@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:41:22 by hsisman           #+#    #+#             */
/*   Updated: 2022/02/14 15:20:48 by hsisman          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else if (dst > src)
	{
		while (n--)
			*((unsigned char *)(dst + n)) = *((unsigned char *)(src + n));
	}
	return (dst);
}
/*int main()
{
  char a[] = "bu bir testtir";
  printf("%s",ft_memmove((a + 2) , a, 4));
}*/
//src'nin adresi dest'ten kucuk olduğunda
//sondan baslanır overleap problemi yaşanmaması icin.
//memcpy'den farkı budur
//eğer bir problem yoksa direkt normal bir şekilde 
//(memcpy gibi) src'den dst'ye bytelari alır.
