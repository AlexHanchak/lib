/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:30:41 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:30:42 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	ch;
	int		i;

	str = (char*)s;
	ch = (char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	str = 0;
	return (str);
}
