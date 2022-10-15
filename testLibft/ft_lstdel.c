/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:25:20 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:25:21 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;

	if (*alst != NULL)
	{
		while (*alst != NULL)
		{
			next = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = next;
		}
	}
}
