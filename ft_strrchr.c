/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <nacht29.study@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:18:49 by yachan            #+#    #+#             */
/*   Updated: 2024/06/18 19:18:51 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ref;
	char	*temp;

	ref = (char)c;
	temp = (char *)s;
	while (*temp)
		temp++;
	while (temp != s)
	{
		if (*temp == ref)
			break ;
		temp--;
	}
	if (temp == s && *temp != ref)
		return (NULL);
	return (temp);
}
