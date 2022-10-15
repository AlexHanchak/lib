/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:30:03 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:30:04 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*z1;
	char	*z2;

	i = 0;
	j = 0;
	z1 = (char*)s1;
	z2 = (char*)s2;
	while (z1[i] != '\0')
		i++;
	if (n > ft_strlen(z2))
		n = ft_strlen(z2);
	while (n > 0)
	{
		z1[i] = z2[j];
		i++;
		j++;
		n--;
	}
	z1[i] = '\0';
	return (s1);
}
