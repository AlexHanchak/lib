/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:30:59 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:31:00 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	substring = (char*)malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (NULL);
	while (i < (unsigned int)len)
	{
		substring[i] = s[start];
		start++;
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
