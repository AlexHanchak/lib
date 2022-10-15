/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:26:05 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:26:05 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*z1;
	unsigned char	*z2;

	z1 = (unsigned char*)s1;
	z2 = (unsigned char*)s2;
	while (n > 0)
	{
		if (*z1 != *z2)
			return (*z1 - *z2);
		z1++;
		z2++;
		n--;
	}
	return (0);
}
