/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <nacht29.study@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:09:54 by yachan            #+#    #+#             */
/*   Updated: 2024/06/18 19:09:54 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
