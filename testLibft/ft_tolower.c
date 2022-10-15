/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:31:11 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:31:12 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (c >= 65 && c <= 90)
	{
		ch = ch + 32;
		c = (int)ch;
	}
	return (c);
}
