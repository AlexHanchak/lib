/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:31:05 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:31:06 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*mk_string(const char *s, char *s_copy, int j, int i)
{
	int	k;

	k = 0;
	while (j <= i)
	{
		s_copy[k] = s[j];
		j++;
		k++;
	}
	s_copy[k] = '\0';
	return (s_copy);
}

char		*ft_strtrim(char const *s)
{
	char	*s_copy;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s) - 1;
	j = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i--;
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j < i)
		j++;
	s_copy = (char*)malloc(sizeof(char) * (i - j + 2));
	if (s_copy == NULL)
		return (NULL);
	s_copy = mk_string(s, s_copy, j, i);
	return (s_copy);
}
