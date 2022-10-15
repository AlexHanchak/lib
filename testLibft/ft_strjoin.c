/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:29:37 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:29:38 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*mk_result1(char const *s1, char *result)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	return (result);
}

static char	*mk_result2(char const *s2, char *result, int i)
{
	int	j;

	j = 0;
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	result = (char*)malloc(sizeof(char) * (i + j + 1));
	if (result == NULL)
		return (NULL);
	result = mk_result1(s1, result);
	result = mk_result2(s2, result, i);
	return (result);
}
