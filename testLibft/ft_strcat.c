/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:27:25 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:27:26 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int				i;
	int				j;
	int				k;
	unsigned char	*z1;
	unsigned char	*z2;

	i = 0;
	j = 0;
	k = 0;
	z1 = (unsigned char*)s1;
	z2 = (unsigned char*)s2;
	while (z1[i] != '\0')
		i++;
	while (z2[j] != '\0')
		j++;
	k = i + j;
	j = 0;
	while (i < k)
	{
		z1[i] = z2[j];
		j++;
		i++;
	}
	z1[i] = '\0';
	return (s1);
}
