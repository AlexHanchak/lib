/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:24:25 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:24:26 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_add_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	tmp = *alst;
	if (!new)
		return ;
	if (*alst != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*alst = new;
}
