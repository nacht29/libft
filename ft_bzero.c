/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <nacht29.study@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:02:19 by yachan            #+#    #+#             */
/*   Updated: 2024/06/20 15:42:16 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
int main(void)
{
	int	int_arr[3] = {1,2,3};
	ft_bzero(int_arr, 12);
	for (int i = 0; i < 3; i++)
		printf("%d\n", int_arr[i]);
}
*/