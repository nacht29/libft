/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <nacht29.study@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:11:19 by yachan            #+#    #+#             */
/*   Updated: 2024/06/20 13:11:20 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	alloc_len(char const *s, char c)
{
	size_t	len;
	int		flag;

	len = 0;
	flag = 1;
	while (*s)
	{
		if (*s != c && flag == 1)
		{
			len++;
			flag = 0;
		}
		else if (*s == c)
			flag = 1;
		s++;
	}
	return (len);
}

static void	split(char const *s, char c, char ***str_arr, size_t itr)
{
	size_t	start;
	size_t	end;
	size_t	arr_pos;

	start = 0;
	arr_pos = 0;
	while (itr > 0)
	{
		end = 0;
		while (s[start] == c)
			start++;
		while (s[start + end] != c && s[start + end] != '\0')
			end++;
		(*str_arr)[arr_pos] = ft_substr(s, (int)start, end);
		start = start + end;
		arr_pos++;
		itr--;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**str_arr;

	if (!s)
		return (NULL);
	len = alloc_len(s, c);
	str_arr = malloc((len + 1) * sizeof(char *));
	if (!str_arr)
		return (NULL);
	split(s, c, &str_arr, len);
	str_arr[len] = NULL;
	return (str_arr);
}

/*
#include <stdio.h>
int main(void)
{
	char const *s = "xxxaaxxxxbbbb";
	char c = 'x';
	char **str = ft_split(s, c);
	printf("len: %lu\n", alloc_len(s, c));
	int i = -1;
	while (str[++i])
	{
		printf("%s\n", str[i]);
	}
	printf("end: %s\n", str[i]);
	return (0);
}
*/