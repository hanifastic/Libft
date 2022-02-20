/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsisman <hsisman@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:07:54 by hsisman           #+#    #+#             */
/*   Updated: 2022/02/18 03:24:43 by hsisman          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	new->next = *lst;
	*lst = new;
}
//daha once olusturulan struct dizimiz (t_list) ve eklenecek yeni struct
// gonderilir. 19. satirda new innext elemani lst nin icerisine atanir.
// 20 de lst nin asil degeri new olur.
// boylece new lst nin onune eklenmis olur.
