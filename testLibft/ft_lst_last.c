/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:24:32 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:24:50 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list	*ft_lst_last(t_list **alst)
{
	t_list	*tmp;

	if (!(*alst))
		return (NULL);
	tmp = *alst;
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		return (tmp);
	}
	else
		return (NULL);
}
