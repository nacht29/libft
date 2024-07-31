/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <nacht29.study@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:15:01 by yachan            #+#    #+#             */
/*   Updated: 2024/06/18 19:43:18 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ref;
	char	*temp;

	ref = (char)c;
	temp = (char *)s;
	while (*temp)
	{
		if (*temp == ref)
			return (temp);
		temp++;
	}
	if (c == '\0')
		return (temp);
	return (NULL);
}
