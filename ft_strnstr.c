/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <nacht29.study@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:18:38 by yachan            #+#    #+#             */
/*   Updated: 2024/06/18 19:18:39 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len;

	len = ft_strlen(needle);
	if (n == 0 && haystack == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len <= n)
	{
		if (ft_strncmp(haystack, needle, len) == 0)
			return ((char *)haystack);
		n--;
		haystack++;
	}
	return (NULL);
}
