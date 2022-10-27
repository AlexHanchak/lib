/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohanchak <ohanchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:04:45 by ohanchak          #+#    #+#             */
/*   Updated: 2022/10/23 18:59:59 by ohanchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dist, const char *src, size_t len)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;
	size_t	j;

	len_dst = ft_strlen(dist);
	len_src = ft_strlen(src);
	i = len_dst;
	if (dist == src)
		return (0);
	if (len != 0 && i < (len - 1))
	{
		j = 0;
		while (i < (len - 1) && src[j] != '\0')
		{
			dist[i] = src[j];
			i++;
			j++;
		}
		dist[i] = '\0';
	}
	if (len_dst > len)
		return (len + len_src);
	return (len_dst + len_src);
}
