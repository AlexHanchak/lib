/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:02:16 by lex               #+#    #+#             */
/*   Updated: 2022/10/24 11:19:08 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
        char    *sjoin;
        size_t  size;
        size_t  len1;
        size_t  len2;

        if (s1 == 0 || s2 == 0)
                return (0);
        size = ft_strlen(s1) + ft_strlen(s2) + 1;
        sjoin = malloc(size * sizeof(char));
        if (sjoin == 0)
                return (0);
        len1 = 0;
        while (len1 < ft_strlen(s1))
        {
                sjoin[len1] = s1[len1];
                len1++;
        }
        len2 = 0;
        while (len2 < ft_strlen(s2))
        {
                sjoin[len1 + len2] = s2[len2];
                len2++;
        }
        sjoin[len1 + len2] = '\0';
        return (sjoin);
}