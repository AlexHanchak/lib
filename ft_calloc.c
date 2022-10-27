/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohanchak <ohanchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:34:29 by ohanchak          #+#    #+#             */
/*   Updated: 2022/10/27 18:23:18 by ohanchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t	size)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((count <= 0 && size >= 0) || (count >= SIZE_MAX && size >= SIZE_MAX))
		return (NULL);
	str = (char *)malloc(count * size);
	if (str)
	{
		while (i < count * size)
		{
			str[i] = 0;
			i++;
		}
	}
	return ((void *)str);
}
