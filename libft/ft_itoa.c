/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsisman <hsisman@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:37:33 by hsisman           #+#    #+#             */
/*   Updated: 2022/02/18 00:03:14 by hsisman          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ff(long n)
{
	size_t	karakter;

	karakter = 0;
	if (n < 0)
	{
		karakter++;
		n = -n;
	}
	while (n >= 1)
	{
		karakter++;
		n = n / 10;
	}
	return (karakter);
}

static char	*ft_zz(char *rtn, long nbr, int len, int neg)
{
	if (nbr != 0)
		rtn = malloc(sizeof(char) * (len + 1));
	else
		return (rtn = ft_strdup ("0"));
	if (!rtn)
		return (0);
	if (nbr < 0)
	{
		neg++;
		nbr = -nbr;
	}
	rtn[len] = '\0';
	while (--len)
	{
		rtn[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (neg == 1)
		rtn[0] = '-';
	else
		rtn[0] = (nbr % 10) + '0';
	return (rtn);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*rtn;
	long	nbr;
	int		neg;

	nbr = n;
	len = ft_ff(nbr);
	rtn = 0;
	neg = 0;
	rtn = ft_zz(rtn, nbr, len, neg);
	if (!rtn)
		return (0);
	return (rtn);
}
//int'den stringe donusturme
//-
//15de kac basamaklı sayı oldugunu buluyoruz
//negatif deger ise onu pozitif yapıyoruz
//-
//33te mallocla yer acıyoruz ve doldurmaya calısıyor
//+1yazma sebebimiz sona null atıyor devamında girecegimiz
//sayının modunu alıyoruz boylece sondan basa yazdırmıs oluyor
//-
//59da integer degerimizi stringe ceviriyoruz 
//-
//71de eger rtn bos ise yani islemimiz gerceklesmediyse null
