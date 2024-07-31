/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <nacht29.study@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:05:53 by yachan            #+#    #+#             */
/*   Updated: 2024/06/18 19:05:59 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	alloc_len(int n)
{
	long	num;
	size_t	len;

	len = 1;
	num = n;
	if (n < 0)
		num = -num;
	while (num >= 10)
	{
		num /= 10;
		len++;
	}
	if (n < 0)
		return (len + 1);
	return (len);
}

static void	make_str(char **str, size_t len, int n, long num)
{
	size_t	og_len;

	og_len = len;
	while (len > 0)
	{
		(*str)[len - 1] = '0' + num % 10;
		num /= 10;
		len--;
	}
	if (n < 0)
		(*str)[0] = '-';
	(*str)[og_len] = '\0';
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*str;

	num = n;
	if (n < 0)
		num = -num;
	len = alloc_len(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	make_str(&str, len, n, num);
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	int		n;
	char	*s;

	n = INT_MIN;
	s = ft_itoa(n);
	printf("len: %zu\n", alloc_len(n));
	printf("int: %s\n", s);
	write(1 , "write s: ", 9);
	write(1, s, 11);
	write(1, "\n", 1);
}
*/
