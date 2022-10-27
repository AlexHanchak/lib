/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohanchak <ohanchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:35:50 by ohanchak          #+#    #+#             */
/*   Updated: 2022/10/23 18:54:25 by ohanchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hayst;
	char	*need;

	hayst = (char *)haystack;
	need = (char *)needle;
	if (need[0] == '\0')
		return (hayst);
	i = 0;
	while (hayst[i] != '\0')
	{
		j = 0;
		if (hayst[i] == need[0])
		{
			while (hayst[i + j] == need[j] && (j + i) < len && need[j] != '\0')
				j++;
			if (need[j] == '\0')
				return (&hayst[i]);
		}
		i++;
	}
	return (0);
}
