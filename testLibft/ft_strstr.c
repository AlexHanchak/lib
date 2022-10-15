/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:30:52 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:30:54 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (*haystack != '\0')
	{
		i = 0;
		while (haystack[i] == needle[i] &&
			haystack[i] != '\0' && needle[i] != '\0')
			i++;
		if (needle[i] == '\0')
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
