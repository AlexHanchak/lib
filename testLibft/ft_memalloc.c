/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:25:49 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:25:50 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*result;

	result = malloc(sizeof(size_t) * (size));
	if (result == NULL)
		return (NULL);
	ft_memset(result, 0, (size));
	return (result);
}
