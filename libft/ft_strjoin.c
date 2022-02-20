/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsisman <hsisman@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:37:04 by hsisman           #+#    #+#             */
/*   Updated: 2022/02/16 19:51:58 by hsisman          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}
//s1 ve s2 yi birlestirir yeni bir string olusturur return eder
//21de s1 ve s2 bossa null donder
//23de mallocla newstr yer acar
//24te yeni metnin ici bossa null donder
//27de s1deki metnimiz null degilse newstr'ye yazar
//33te s2deki metnimiz null degilse s1in ustune ekleme yapar
//ornek :     s1 : hanif    s2 : sisman
//newstr :   hanifsisman
