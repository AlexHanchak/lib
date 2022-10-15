/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:26:00 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:26:01 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*result;

	i = 0;
	ch = (unsigned char)c;
	result = (unsigned char*)s;
	while (i < n)
	{
		if (result[i] == ch)
			return (&result[i]);
		i++;
	}
	result = NULL;
	return (result);
}
