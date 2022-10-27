/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohanchak <ohanchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:57:09 by ohanchak          #+#    #+#             */
/*   Updated: 2022/10/27 17:20:29 by ohanchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*source;
	char	*destiny;
	int		i;

	if (!dst && !src)
		return (0);
	source = (char *) src;
	destiny = dst;
	i = 0;
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (dst);
}
